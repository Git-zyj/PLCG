#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12447240328817903923ULL;
unsigned long long int var_2 = 4034995486589727683ULL;
unsigned long long int var_3 = 9175113816277001052ULL;
unsigned long long int var_7 = 3408305312797747997ULL;
unsigned char var_9 = (unsigned char)31;
unsigned char var_10 = (unsigned char)172;
unsigned long long int var_11 = 4349711225886882395ULL;
int zero = 0;
unsigned long long int var_12 = 7368069641483257250ULL;
unsigned char var_13 = (unsigned char)223;
unsigned long long int var_14 = 15407192888574697026ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
