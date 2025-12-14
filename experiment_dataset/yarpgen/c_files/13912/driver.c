#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2101992150785243356LL;
long long int var_3 = -1045675963066353500LL;
unsigned long long int var_4 = 14843353169004376037ULL;
unsigned long long int var_5 = 14224545913507274478ULL;
long long int var_9 = 2967518088025021843LL;
long long int var_14 = -2305664479194888119LL;
long long int var_17 = 7184118147726122391LL;
int zero = 0;
unsigned long long int var_18 = 8068494036790771028ULL;
long long int var_19 = -6719904089183592945LL;
long long int var_20 = 4698161393759593568LL;
long long int var_21 = -5254802139634835308LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
