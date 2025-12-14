/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109698
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 6995016442174385169ULL)) || (((/* implicit */_Bool) (unsigned char)20)))))));
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) 11451727631535166447ULL)))));
        var_22 -= ((/* implicit */unsigned char) (-(10135717839497062552ULL)));
        var_23 = ((/* implicit */unsigned char) min(((+(arr_1 [(signed char)15]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_19))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) 
        {
            arr_7 [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2 - 2] [i_2 - 2]))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) arr_6 [(unsigned char)0] [i_1] [i_1]))), ((-(3725120189U))))))));
            arr_8 [1ULL] = ((/* implicit */signed char) min(((-(((/* implicit */int) (unsigned char)67)))), (((/* implicit */int) arr_4 [i_1] [i_2]))));
        }
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 2) 
        {
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (min((((/* implicit */unsigned long long int) (unsigned char)246)), ((((-(8311026234212489062ULL))) % (((/* implicit */unsigned long long int) 2534895101U))))))));
            var_25 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned char)117)) ? (6995016442174385169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
        }
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) ((min((max((((/* implicit */unsigned int) arr_6 [i_1] [i_1] [i_1])), (arr_1 [i_1]))), (((/* implicit */unsigned int) min(((unsigned char)193), ((unsigned char)139)))))) / (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)111)))))));
        var_26 = ((/* implicit */unsigned char) ((((unsigned int) (unsigned char)186)) % (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)105)))));
        var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(3973917950914265772ULL)))) ? (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))) : ((~(((/* implicit */int) ((unsigned char) arr_4 [i_1] [i_1])))))));
    }
    var_28 *= ((/* implicit */unsigned char) (-(((unsigned long long int) ((var_5) % (345780151U))))));
    var_29 = ((/* implicit */unsigned char) 11451727631535166447ULL);
}
