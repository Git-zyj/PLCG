/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111214
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : (((((/* implicit */_Bool) (unsigned char)214)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) arr_1 [i_0 - 3]);
            var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 4] [i_0 + 1]))));
            var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            arr_7 [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0 - 4] [i_2] [i_2]))));
            arr_8 [i_0] [i_2] = ((/* implicit */signed char) ((int) 2062903839));
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((unsigned char) arr_4 [i_0] [i_2])))));
            arr_9 [(unsigned char)2] [i_0] [i_2] = arr_4 [i_0 + 1] [i_2];
        }
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    arr_17 [i_5] [i_3 - 1] [i_3 - 1] [i_3 - 1] = (~(min((((/* implicit */unsigned int) ((int) (unsigned char)64))), (arr_16 [i_3 + 1] [i_4] [i_4]))));
                    var_18 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((4004354768U) <= (arr_16 [i_3] [i_3 - 1] [i_3 - 1])))), (((unsigned int) arr_16 [i_3] [i_4] [i_3])))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 - 1] [i_4])) && (((/* implicit */_Bool) arr_16 [i_3 + 1] [i_3 + 1] [i_5]))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) (+(max((max((arr_16 [i_4] [i_5] [i_6 - 2]), (((/* implicit */unsigned int) 2062903839)))), (((/* implicit */unsigned int) arr_13 [i_5]))))));
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) arr_16 [(unsigned char)10] [i_5] [i_6 + 2])) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_20 [i_3] [(unsigned char)8] [i_7] [i_6 + 2] [(unsigned char)8])))))) || (((/* implicit */_Bool) ((unsigned int) ((unsigned char) 1445013947)))))))));
                                var_21 = ((signed char) min((arr_18 [i_6 - 2] [i_6] [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6]), (((/* implicit */unsigned int) arr_20 [i_6 - 2] [i_6 - 2] [i_6] [i_6 - 2] [i_6]))));
                                var_22 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)193));
                                var_23 = ((/* implicit */signed char) ((((arr_19 [i_7] [i_6 - 2] [i_5]) << (((((/* implicit */int) arr_11 [i_3])) - (175))))) ^ (((/* implicit */int) ((unsigned char) arr_10 [i_3])))));
                            }
                        } 
                    } 
                    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_13 [3])), (arr_18 [i_5] [14U] [i_5] [i_5] [i_3] [i_3 - 1])))) ? (-1445013948) : (arr_10 [i_3 + 1]))) : ((~(((/* implicit */int) ((((/* implicit */int) (signed char)-93)) >= (((/* implicit */int) arr_20 [i_3 + 1] [i_3 + 1] [18] [i_5] [i_5])))))))));
                }
            } 
        } 
    } 
    var_25 &= ((/* implicit */int) ((signed char) var_2));
    var_26 = ((/* implicit */int) min((var_11), (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_6))))) : (((unsigned int) (unsigned char)199))))));
}
