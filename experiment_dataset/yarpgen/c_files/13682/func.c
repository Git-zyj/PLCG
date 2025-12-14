/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 13682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=13682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/13682
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
    var_16 = ((/* implicit */short) (~(((/* implicit */int) var_2))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((-(((((/* implicit */int) var_10)) * (((/* implicit */int) var_0)))))) - ((((+(((/* implicit */int) (signed char)-68)))) % (((((/* implicit */int) var_3)) + (((/* implicit */int) var_8)))))))))));
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) + (((/* implicit */int) min((var_4), (((/* implicit */signed char) var_0))))))) + (max(((+(((/* implicit */int) var_14)))), (((/* implicit */int) var_15))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [(signed char)18] [i_1] [i_2 - 1] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)104)) % (((/* implicit */int) (signed char)-70))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)151)) >> (((((/* implicit */int) (signed char)-10)) + (28)))))))))));
                        var_19 = ((/* implicit */short) ((((/* implicit */int) max((max((arr_0 [(unsigned char)14]), (arr_5 [i_0 + 1] [i_0] [i_0] [i_0]))), (min(((unsigned char)135), (((/* implicit */unsigned char) (_Bool)1))))))) < ((~(((/* implicit */int) arr_7 [i_3] [i_3] [i_2] [(signed char)1] [(signed char)13] [i_0 - 1]))))));
                        var_20 *= ((/* implicit */signed char) min((max((max(((short)-1169), (((/* implicit */short) arr_7 [i_3] [i_2] [(unsigned char)13] [i_2 + 1] [(unsigned char)10] [i_0 - 1])))), (((/* implicit */short) (signed char)70)))), (((/* implicit */short) (unsigned char)92))));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) arr_8 [i_0 + 1] [i_1] [i_2 + 2] [i_1]);
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [i_2] [i_2] [i_2 + 2])) >> (((/* implicit */int) ((((/* implicit */int) arr_7 [i_4] [i_2] [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1])) >= (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) != (((/* implicit */int) arr_6 [i_1] [i_1] [i_2 - 1]))))))))));
                            arr_14 [i_0] [i_1] [i_2] = ((((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)53)))) > (((((((/* implicit */int) arr_4 [i_0 - 2] [i_1] [i_1] [i_3])) * (((/* implicit */int) arr_2 [i_4])))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_0 - 1] [i_3] [i_4] [(short)11] [i_2]))))))));
                            arr_15 [(signed char)13] [(unsigned char)7] = ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-27)))) | ((-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                            var_23 ^= ((/* implicit */short) max((((((/* implicit */int) ((((/* implicit */int) arr_13 [i_0 - 2] [i_0] [i_1] [i_2] [i_1] [i_3] [i_4])) <= (((/* implicit */int) arr_1 [i_1] [i_3]))))) >> ((((-(((/* implicit */int) arr_6 [i_0 - 2] [i_0 + 1] [i_0])))) + (240))))), ((+(((/* implicit */int) min((arr_8 [i_0 + 1] [i_1] [i_2] [i_3]), (arr_3 [(signed char)0] [i_1]))))))));
                        }
                        arr_16 [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((max((((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])), (((((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 1] [i_0])) >> (((((/* implicit */int) arr_13 [i_0] [i_0 - 1] [i_0 + 1] [i_1] [i_2 - 2] [i_0 - 1] [i_3])) + (75))))))), (((/* implicit */int) (((-(((/* implicit */int) arr_1 [i_0 + 1] [(_Bool)1])))) < (((((/* implicit */int) arr_7 [(_Bool)1] [i_3] [i_3] [i_3] [i_3] [(short)8])) % (((/* implicit */int) arr_12 [i_0 - 1] [(signed char)18] [i_2] [i_3] [i_2 - 1] [(short)15])))))))));
                    }
                    var_24 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)5)) % (((/* implicit */int) (signed char)21))));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) (~((~((~(((/* implicit */int) var_9))))))));
}
