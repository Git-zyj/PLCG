#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4114989102621578847LL;
signed char var_1 = (signed char)115;
signed char var_2 = (signed char)51;
long long int var_3 = -4024834704676195504LL;
signed char var_4 = (signed char)-70;
long long int var_5 = 8721180409560414377LL;
unsigned long long int var_6 = 837123140732857500ULL;
unsigned long long int var_7 = 17360631530932215918ULL;
unsigned long long int var_8 = 3810366654520063346ULL;
long long int var_9 = 1226235729798854283LL;
unsigned long long int var_10 = 10630086282865367177ULL;
unsigned long long int var_11 = 11701413483863766488ULL;
long long int var_12 = -6231098773357227615LL;
int zero = 0;
long long int var_13 = -7935297972329310853LL;
unsigned long long int var_14 = 11332595719215293848ULL;
signed char var_15 = (signed char)-43;
long long int var_16 = 3546424651593375735LL;
unsigned long long int var_17 = 6033186607391873455ULL;
long long int var_18 = -695146863615243123LL;
long long int var_19 = 833613877008616943LL;
long long int var_20 = 457106501729813455LL;
unsigned long long int var_21 = 11405526915862285692ULL;
signed char var_22 = (signed char)-23;
unsigned long long int var_23 = 17557175151876761549ULL;
signed char var_24 = (signed char)23;
long long int var_25 = -2888763820320112887LL;
long long int var_26 = -4198064051286517853LL;
long long int var_27 = -8986845979926970824LL;
unsigned long long int var_28 = 12061953620990767308ULL;
unsigned long long int var_29 = 5729968235425626294ULL;
unsigned long long int var_30 = 15673443152392565958ULL;
unsigned long long int arr_0 [15] ;
long long int arr_2 [15] ;
long long int arr_3 [15] ;
signed char arr_12 [15] ;
unsigned long long int arr_17 [15] [15] [15] [15] ;
signed char arr_18 [15] [15] [15] ;
unsigned long long int arr_19 [15] [15] [15] [15] [15] ;
long long int arr_34 [15] ;
long long int arr_45 [23] [23] ;
signed char arr_46 [23] ;
long long int arr_47 [23] ;
long long int arr_52 [23] [23] [23] ;
unsigned long long int arr_54 [23] ;
long long int arr_57 [23] [23] ;
signed char arr_70 [21] ;
long long int arr_4 [15] ;
long long int arr_5 [15] ;
long long int arr_6 [15] ;
unsigned long long int arr_7 [15] ;
signed char arr_10 [15] [15] ;
unsigned long long int arr_14 [15] [15] ;
long long int arr_25 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_26 [15] [15] ;
long long int arr_30 [15] ;
signed char arr_42 [15] [15] [15] [15] [15] [15] [15] ;
long long int arr_43 [15] [15] [15] ;
long long int arr_48 [23] ;
long long int arr_49 [23] [23] ;
unsigned long long int arr_60 [23] ;
long long int arr_80 [21] [21] [21] [21] [21] [21] [21] ;
long long int arr_81 [21] [21] [21] [21] [21] ;
signed char arr_86 [21] [21] [21] [21] [21] ;
signed char arr_87 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 9997821715703668714ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -6387573278316580107LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = -8351565868081714731LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_12 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 15603956677310957821ULL : 1417760453264750229ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-120 : (signed char)-106;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? 9907879492891386097ULL : 3279598332102398640ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? -219089795205690052LL : 7398779572940256724LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_45 [i_0] [i_1] = -3885263682617122454LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_46 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_47 [i_0] = 402289751698733114LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_52 [i_0] [i_1] [i_2] = 8283604457880252432LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_54 [i_0] = 6215665656862785332ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_57 [i_0] [i_1] = 287624897041430681LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_70 [i_0] = (i_0 % 2 == 0) ? (signed char)89 : (signed char)-82;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = -9178774211990373608LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = -2386569124211264049LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = -982687974659968246LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_7 [i_0] = 4796644082615100489ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)-79;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_14 [i_0] [i_1] = (i_1 % 2 == 0) ? 13573388675624946325ULL : 9603599682099378241ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? 2327036990684733686LL : -8671417804345676213LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_26 [i_0] [i_1] = (i_1 % 2 == 0) ? 7664844985334957924LL : -2292182977935066716LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_30 [i_0] = 4059031659116644493LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_5 % 2 == 0) ? (signed char)-51 : (signed char)-34;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1522819349958380142LL : 4757832707409665008LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_48 [i_0] = 2498733487121025939LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_49 [i_0] [i_1] = -4332779525364700221LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_60 [i_0] = 16200226070923836563ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? 8949775197381106793LL : -2448495472685368895LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -5351192061651941283LL : 1857911835580794459LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)12 : (signed char)79;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_87 [i_0] = (i_0 % 2 == 0) ? (signed char)83 : (signed char)-43;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_26 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                hash(&seed, arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_43 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_49 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_60 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                hash(&seed, arr_80 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_81 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_86 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_87 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
