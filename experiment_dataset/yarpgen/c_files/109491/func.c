/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 109491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=109491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/109491
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((var_14) ? (3519866355581200814ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)77)))))))) ? (((((((/* implicit */_Bool) -8940368435092852334LL)) ? (var_15) : (((/* implicit */int) var_8)))) / (((/* implicit */int) var_2)))) : (((/* implicit */int) ((signed char) (~(var_1)))))));
    var_20 = min((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (var_18)))), (((((/* implicit */int) (short)-14347)) + (((/* implicit */int) var_9)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) (short)-14343)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-85)))) : ((+(((/* implicit */int) var_12))))));
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 17; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */signed char) (+((~(((/* implicit */int) (short)-27566))))));
                        var_23 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [(signed char)12]))) < (arr_7 [(unsigned short)17] [i_1]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) /* same iter space */
    {
        arr_14 [i_4] [i_4] = ((/* implicit */_Bool) min(((-(((/* implicit */int) (short)-14347)))), (min(((-(((/* implicit */int) (signed char)87)))), (((((/* implicit */int) (short)14347)) + (((/* implicit */int) (unsigned char)1))))))));
        arr_15 [i_4] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) / (((((/* implicit */int) arr_6 [i_4] [i_4] [i_4])) % (((/* implicit */int) arr_4 [i_4] [i_4]))))))), ((-(6974160979803110919LL)))));
        arr_16 [i_4] = ((/* implicit */long long int) (short)14330);
        var_24 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) arr_6 [i_4] [i_4] [i_4])) && (((/* implicit */_Bool) (~(arr_9 [i_4]))))))));
    }
    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) & (((((long long int) var_0)) + (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))))))));
}
