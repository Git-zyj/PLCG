/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 126765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=126765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/126765
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_18 = ((/* implicit */unsigned char) (unsigned short)27554);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)50072)) ? (((/* implicit */unsigned long long int) var_15)) : (var_5))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65522);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) ((arr_4 [i_1 + 2]) - (arr_4 [i_1 - 1])));
            arr_6 [i_0] [i_0] [(unsigned char)5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)56))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_21 = ((/* implicit */int) ((max(((+(13024855701100508918ULL))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)253))))))) % (var_5)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
        {
            var_22 += ((/* implicit */unsigned long long int) 6241846869664871184LL);
            var_23 = (+(0ULL));
        }
        for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
        {
            arr_15 [i_2] [i_2] [i_4] = -3527021422221330792LL;
            arr_16 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned char)192)), (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)64)))))))) ? (((/* implicit */unsigned long long int) max((max((var_12), (((/* implicit */int) arr_12 [i_2] [i_2] [i_2])))), (((((/* implicit */_Bool) var_3)) ? (1031943785) : ((-2147483647 - 1))))))) : (var_11)));
            var_24 = ((/* implicit */long long int) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) - (5421888372609042698ULL))) * (((((/* implicit */_Bool) (unsigned short)12)) ? (3ULL) : (((/* implicit */unsigned long long int) 6241846869664871182LL)))))) >= (((((/* implicit */unsigned long long int) ((var_10) >> (22)))) ^ (((((/* implicit */_Bool) (unsigned short)16)) ? (((/* implicit */unsigned long long int) -22)) : (arr_10 [i_2])))))));
        }
        for (long long int i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */int) (unsigned short)65530)) % (((/* implicit */int) (unsigned short)26830)))) : (max((arr_9 [i_2] [i_5]), (((/* implicit */int) (unsigned char)242)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) ^ (10967887313180523855ULL)))) || ((!(((/* implicit */_Bool) var_1)))))))));
            arr_19 [i_2] = ((/* implicit */int) 13024855701100508918ULL);
            arr_20 [i_2] [i_2] [i_2] = ((/* implicit */int) max(((+((+(6708609780832122688LL))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)48358)))))));
        }
        var_26 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(-3617397905507879127LL))))));
        var_27 = arr_18 [i_2] [i_2] [i_2];
    }
    var_28 = ((/* implicit */int) ((((((/* implicit */_Bool) max((10967887313180523855ULL), (var_17)))) ? (((/* implicit */unsigned long long int) ((int) -7359805451219963137LL))) : (((((/* implicit */_Bool) 17780010286311464513ULL)) ? (var_11) : (((/* implicit */unsigned long long int) var_2)))))) % (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26315))) | (var_11))), (((/* implicit */unsigned long long int) max((var_9), (var_1))))))));
    var_29 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((var_17) * (666733787398087096ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned char)254))))))));
}
