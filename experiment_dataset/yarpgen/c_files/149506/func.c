/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 149506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=149506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/149506
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
    var_14 = var_3;
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned short)26942), (arr_4 [i_2 - 1] [i_2 + 2] [i_2 + 1])))) && (((/* implicit */_Bool) var_0))));
                    var_16 &= arr_1 [i_0 - 1] [i_0 - 1];
                    arr_7 [i_2] [i_2] [i_2] [i_0] = ((unsigned short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_0 - 2]))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_2 + 2]))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 3])) || (((/* implicit */_Bool) arr_4 [i_0 - 3] [i_0 + 2] [i_2 + 2]))))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
                {
                    var_18 += ((unsigned short) (-(((/* implicit */int) arr_0 [i_0 - 3]))));
                    var_19 = max((var_9), (min((((unsigned short) (unsigned short)1)), ((unsigned short)0))));
                    var_20 -= ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_9 [i_1] [i_3]), ((unsigned short)0))))));
                }
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4])) ^ (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2] [i_4]))))) || (((/* implicit */_Bool) var_2)))) || (((((/* implicit */_Bool) (unsigned short)25057)) || (((/* implicit */_Bool) (unsigned short)40796)))))))));
                    var_22 *= (unsigned short)1;
                    var_23 = (unsigned short)25057;
                }
                arr_16 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)38578))));
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_10 [i_0] [i_0] [i_1]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 3] [i_0 + 1])))))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 19; i_6 += 4) 
                    {
                        {
                            var_25 = var_0;
                            var_26 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)15320)) ? (((/* implicit */int) (unsigned short)26504)) : (((/* implicit */int) (unsigned short)50215)))), ((~(((/* implicit */int) arr_14 [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 4) 
    {
        arr_26 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */int) var_4)) != (((((((/* implicit */int) (unsigned short)21349)) * (((/* implicit */int) var_6)))) / (((/* implicit */int) var_5))))));
        var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)41167)) || (((/* implicit */_Bool) (unsigned short)52431))));
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 1) 
    {
        var_28 |= ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_8] [i_8] [i_8])) != (((/* implicit */int) max((arr_9 [i_8] [i_8]), ((unsigned short)0))))));
        var_29 ^= ((/* implicit */unsigned short) ((((((/* implicit */int) max(((unsigned short)65535), ((unsigned short)50215)))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_8] [i_8] [i_8]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)15)) || (((/* implicit */_Bool) (unsigned short)52431))))) : ((+(((/* implicit */int) (unsigned short)128))))));
    }
    var_30 = ((/* implicit */unsigned short) max((var_30), (var_2)));
}
