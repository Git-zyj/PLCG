#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4122960399U;
int var_1 = 1695279072;
unsigned long long int var_2 = 4837902357317725068ULL;
unsigned long long int var_3 = 6177329957118220721ULL;
unsigned long long int var_4 = 11239309089253408701ULL;
unsigned int var_5 = 3062304478U;
int var_7 = -1275628377;
unsigned char var_8 = (unsigned char)74;
unsigned int var_9 = 622298223U;
int zero = 0;
long long int var_10 = 2774669886800316056LL;
unsigned int var_11 = 4175425146U;
int var_12 = -1207825732;
int var_13 = -902688606;
short var_14 = (short)26851;
long long int var_15 = 6294986125578214913LL;
int var_16 = -121600389;
unsigned short var_17 = (unsigned short)46729;
unsigned short var_18 = (unsigned short)26632;
int var_19 = -1151901872;
unsigned short var_20 = (unsigned short)45221;
unsigned long long int arr_0 [11] ;
unsigned int arr_1 [11] ;
int arr_2 [11] ;
long long int arr_3 [11] [11] ;
unsigned short arr_4 [11] ;
long long int arr_6 [11] ;
_Bool arr_10 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 81007268184194773ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2569026171U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = 1981795385;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = -8564531908477095486LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)23627 : (unsigned short)25901;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 4191430711014756730LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
