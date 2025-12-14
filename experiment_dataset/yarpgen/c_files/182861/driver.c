#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned long long int var_1 = 7482439840872465748ULL;
unsigned long long int var_2 = 14108554748818679490ULL;
unsigned long long int var_4 = 4373147712800972291ULL;
signed char var_5 = (signed char)-19;
unsigned long long int var_7 = 17723846894628420810ULL;
unsigned long long int var_9 = 17288427063588375231ULL;
unsigned long long int var_10 = 14574397732220994568ULL;
signed char var_11 = (signed char)-34;
unsigned long long int var_12 = 3053079428647800063ULL;
unsigned long long int var_13 = 17938742977614817903ULL;
unsigned long long int var_14 = 14782359589887855651ULL;
signed char var_15 = (signed char)108;
unsigned long long int var_18 = 9921947554874277966ULL;
int zero = 0;
unsigned long long int var_19 = 16443230429268408468ULL;
signed char var_20 = (signed char)61;
void init() {
}

void checksum() {
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
