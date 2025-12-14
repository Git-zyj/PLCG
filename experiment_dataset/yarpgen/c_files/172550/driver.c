#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1703843826359963638LL;
long long int var_3 = -2217925194106601482LL;
long long int var_4 = 8068768640510325963LL;
long long int var_5 = -6406852338717135747LL;
long long int var_6 = -3422459818545639287LL;
long long int var_7 = 4849254350701414134LL;
long long int var_8 = 8024421906710161799LL;
long long int var_9 = -3967377927496626516LL;
long long int var_10 = -2775426000030539442LL;
long long int var_11 = -7074373282855604295LL;
long long int var_13 = 7909221226168631475LL;
long long int var_14 = -5052003969592770919LL;
int zero = 0;
long long int var_16 = 2094404085257346291LL;
long long int var_17 = 7567444375542686329LL;
long long int var_18 = -7842522285631797692LL;
long long int var_19 = 4189961617017778499LL;
long long int var_20 = -939281365565691427LL;
long long int var_21 = -909672216070574793LL;
long long int var_22 = -6170481984442407613LL;
long long int var_23 = -5849771581587524881LL;
long long int arr_0 [10] [10] ;
long long int arr_1 [10] ;
long long int arr_2 [10] [10] ;
long long int arr_6 [10] [10] [10] [10] ;
long long int arr_7 [10] [10] [10] [10] ;
long long int arr_8 [10] [10] ;
long long int arr_9 [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = -9076711408621692637LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -6621882864479797926LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = -6091442402289564198LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = -2600008335456213657LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = 4588464296004407476LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = 2629258354542988672LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3962264001415360199LL : -359668227915063438LL;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
