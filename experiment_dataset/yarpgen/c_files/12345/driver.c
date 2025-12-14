#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4344870682584463024LL;
long long int var_2 = -5578459600118785577LL;
_Bool var_3 = (_Bool)0;
long long int var_5 = 3799196056993199143LL;
long long int var_7 = -3825056811281464754LL;
unsigned long long int var_9 = 12688882430398879756ULL;
long long int var_11 = -7916872484616571391LL;
long long int var_13 = 2522272330016011775LL;
unsigned long long int var_14 = 6904285807120889719ULL;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -5316104542468684292LL;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
