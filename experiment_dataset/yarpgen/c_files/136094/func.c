/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 136094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=136094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/136094
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (!(arr_4 [i_0] [i_1] [i_0])));
                    arr_9 [i_1] [i_0] = ((/* implicit */short) (unsigned char)71);
                    var_12 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)8862)) ? (arr_3 [i_2 - 3]) : (arr_3 [i_2 - 1])))) == ((+(((var_6) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [0] [(unsigned char)12])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 3) 
                        {
                            {
                                arr_16 [(_Bool)1] [i_3] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) arr_10 [i_2 - 2] [i_2] [i_2 - 3] [i_3] [i_3] [i_3])) ^ ((-(((/* implicit */int) arr_11 [i_4] [i_3] [i_0] [(short)7] [i_0])))))), (((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_0] [(short)4]))))) ? (((/* implicit */int) ((var_6) < (var_6)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-8369264412490968978LL))))))));
                                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)56666)) ? (((/* implicit */int) (unsigned short)47961)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23194)))))));
                                var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((arr_6 [0LL]), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (unsigned char)228)))) ^ (((/* implicit */int) var_7))))))))));
                                var_15 = ((/* implicit */unsigned short) ((0U) > (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (short)63)))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */long long int) max((var_16), (((((/* implicit */long long int) ((((4294967295U) > (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)14]))))) / ((~((+(-8369264412490968978LL)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (int i_6 = 2; i_6 < 21; i_6 += 3) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 1; i_8 < 20; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */long long int) 0U)), (34359738240LL)))))));
                                arr_30 [i_7] [i_9] [16] = ((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_8))))))));
                                arr_31 [i_6] [i_6] [i_9] [i_6] [i_6] [i_8 + 2] = (!(((/* implicit */_Bool) ((signed char) var_5))));
                                arr_32 [i_9] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) (unsigned short)17)))), (((/* implicit */int) (unsigned char)143))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((arr_20 [i_6]) != (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)46))))) ? ((+(((/* implicit */int) (unsigned short)7507)))) : ((-(((/* implicit */int) arr_0 [(unsigned short)14])))))))));
                    var_19 = ((/* implicit */_Bool) (unsigned short)53420);
                }
            } 
        } 
    } 
}
