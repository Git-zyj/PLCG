/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 159043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=159043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/159043
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
    var_18 = ((/* implicit */unsigned long long int) var_17);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) 1048448)) | (var_6))) : (((/* implicit */unsigned long long int) -1048449)))))));
                    var_20 *= ((/* implicit */unsigned long long int) var_12);
                    var_21 &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_17))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) ((signed char) (unsigned short)17496));
                            var_23 &= var_14;
                        }
                        var_24 &= ((/* implicit */short) ((unsigned long long int) var_4));
                    }
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_25 = ((/* implicit */short) min((((/* implicit */int) var_13)), ((+(((/* implicit */int) (unsigned char)184))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)3712)) ? (var_8) : (((/* implicit */int) (unsigned char)71))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned char) var_17);
                        var_28 = ((/* implicit */signed char) max((var_28), (var_17)));
                        var_29 += ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_7)))));
                        arr_22 [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)120)) || (((/* implicit */_Bool) var_4))))) == (((/* implicit */int) var_13))));
                    }
                }
                arr_23 [i_0] &= ((/* implicit */short) min((((/* implicit */int) ((_Bool) var_1))), ((~((~(((/* implicit */int) (unsigned char)14))))))));
                var_30 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_13))))));
            }
        } 
    } 
    var_31 = var_12;
    var_32 = ((/* implicit */short) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), ((unsigned short)32640)))) ? (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)45)))) : (-1440025249))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) < (var_6)))) == (max((((/* implicit */int) (unsigned short)19767)), (var_8))))))));
    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) var_14))));
}
