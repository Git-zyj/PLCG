/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 156520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=156520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/156520
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [(unsigned char)6] [i_0] = ((/* implicit */int) ((unsigned short) ((var_13) << (((((-1924147065) + (1924147089))) - (24))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            arr_5 [11LL] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))))) > (((((/* implicit */_Bool) (unsigned short)27633)) ? (3655444276U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (signed char i_3 = 2; i_3 < 15; i_3 += 2) 
                {
                    {
                        arr_10 [i_0] [15LL] [13] [i_3] = ((/* implicit */int) max((((/* implicit */unsigned int) var_11)), (((((/* implicit */unsigned int) ((/* implicit */int) min((var_5), ((unsigned short)2))))) - (max((0U), (((/* implicit */unsigned int) var_10))))))));
                        arr_11 [i_1] [i_3 + 2] = ((/* implicit */int) (-(var_2)));
                        var_14 = ((/* implicit */unsigned int) (~(max((0), (((/* implicit */int) (signed char)-11))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((int) var_4))));
                            arr_16 [i_0] [i_1] [i_1] [i_3] [5] = ((/* implicit */unsigned int) (-(((unsigned long long int) (short)-1))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 3) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [2U] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_2] [6ULL] [i_5])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (2328638924U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10529)))))) : (-5706286590023134985LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) -8065758545078132470LL)) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)480)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [12ULL]))))))))));
                            arr_21 [i_0] [i_0] [16U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) var_6))))) ? (min((((/* implicit */int) var_9)), (1737912706))) : (((/* implicit */int) (!(((/* implicit */_Bool) 353386593))))))) > (-547366280)));
                        }
                    }
                } 
            } 
            arr_22 [i_1] [i_1] [i_0] &= ((/* implicit */int) (unsigned short)52947);
            var_15 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) - (max((((/* implicit */unsigned int) 0)), (arr_0 [i_0] [i_1]))))) * (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9)))))))));
        }
        arr_23 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) var_10)) | (min((var_2), (((/* implicit */unsigned int) var_0))))))));
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) -289961521)) : (13254017988617079647ULL))))));
    }
    var_17 = ((/* implicit */short) 1638015895);
}
