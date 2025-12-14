/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 166195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=166195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/166195
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                var_10 -= ((/* implicit */unsigned char) ((((((/* implicit */int) max(((unsigned char)255), ((unsigned char)149)))) < (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [9LL] [i_0 + 1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 216639533U)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0 + 2] [i_1 + 1]))))) ? (((/* implicit */int) var_1)) : (min((((/* implicit */int) arr_1 [(_Bool)1])), (127))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((arr_1 [(unsigned short)4]), (arr_1 [i_0])))) : (((((/* implicit */int) (unsigned char)65)) & (-513721587)))))));
                var_11 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((9377389291278895994ULL), (var_8)))) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_1]))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) -280110235);
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)223))) : (arr_6 [i_0] [i_0] [i_2] [i_0])))) || (((/* implicit */_Bool) 4302348346782123462LL))))))));
                    var_14 += ((/* implicit */signed char) var_2);
                }
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    var_15 = ((/* implicit */signed char) var_3);
                    var_16 = ((/* implicit */signed char) (_Bool)1);
                    var_17 = ((/* implicit */int) var_0);
                    var_18 = ((/* implicit */unsigned short) (signed char)-67);
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4669)) ? (min((-759260952), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)47)) && (((/* implicit */_Bool) var_0))))))) : (((/* implicit */int) var_5))));
                }
            }
        } 
    } 
    var_20 = var_2;
}
