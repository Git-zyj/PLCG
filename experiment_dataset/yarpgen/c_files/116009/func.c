/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 116009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=116009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/116009
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
    var_17 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_12)), ((-(var_16)))))));
    var_18 = ((/* implicit */unsigned short) ((unsigned char) ((short) ((short) var_1))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((short) ((int) var_12)));
                /* LoopSeq 3 */
                for (short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    arr_11 [i_0] = ((/* implicit */signed char) (unsigned char)14);
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_15))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)224))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-3226649301068172770LL)))));
                    var_20 = ((/* implicit */unsigned short) ((signed char) (unsigned short)33658));
                    var_21 = ((/* implicit */unsigned short) 9007199254740991LL);
                    var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */short) (signed char)-65))))) ? ((-(((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)227)))))) : (min((((/* implicit */int) ((unsigned short) var_8))), (var_5)))));
                }
                /* vectorizable */
                for (short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    var_23 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */int) var_14))));
                    arr_14 [i_3] [i_1 - 2] [i_3] [i_3] = ((/* implicit */unsigned short) var_9);
                    var_24 = ((signed char) ((signed char) var_10));
                    var_25 = ((/* implicit */int) ((unsigned char) var_6));
                    var_26 *= ((/* implicit */unsigned int) (unsigned short)13);
                }
                for (short i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 3) 
                        {
                            {
                                arr_22 [i_4] [i_1] = (+(18446744073709551615ULL));
                                arr_23 [i_4] = ((/* implicit */int) ((signed char) (short)(-32767 - 1)));
                            }
                        } 
                    } 
                    var_27 *= ((/* implicit */unsigned short) var_0);
                    var_28 = ((/* implicit */signed char) var_14);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            {
                                arr_32 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((signed char) ((unsigned short) var_2)));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_6))));
                                var_30 = ((/* implicit */unsigned char) var_10);
                                arr_33 [i_0] [2ULL] [2ULL] [i_0] [i_0] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) var_15))), ((-(((/* implicit */int) var_9))))));
                                var_31 = ((/* implicit */long long int) ((unsigned short) ((unsigned long long int) var_0)));
                            }
                        } 
                    } 
                }
                var_32 = ((((_Bool) var_2)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((unsigned char) -2147483623))));
            }
        } 
    } 
}
