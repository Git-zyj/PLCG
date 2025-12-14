/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151366
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
    var_20 += ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65527))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((unsigned short) var_1))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                for (short i_3 = 2; i_3 < 9; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)14135)))))));
                            arr_12 [(_Bool)0] [i_1] [i_2] [i_3 - 2] [(unsigned short)1] = (+((((_Bool)0) ? (((/* implicit */int) arr_11 [i_4] [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_1] [(unsigned short)10] [i_3])))));
                        }
                        var_22 = ((/* implicit */_Bool) min((var_22), (arr_9 [i_1 - 1] [i_2] [i_2] [i_1 + 1])));
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 + 1])) | (((((/* implicit */int) (short)127)) >> (((4294967295U) - (4294967289U)))))));
                        var_23 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */int) arr_4 [i_3])) : (((/* implicit */int) var_5))));
                    }
                } 
            } 
        } 
        var_24 ^= ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]);
        var_25 = ((/* implicit */long long int) (-(((239206475U) << (((((/* implicit */int) (unsigned short)32)) - (9)))))));
    }
    /* vectorizable */
    for (signed char i_5 = 2; i_5 < 19; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                {
                    var_26 += ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) 8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) ((unsigned char) (unsigned short)0)))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                    {
                        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_27 += ((/* implicit */signed char) -2739224540341995672LL);
                                arr_27 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) -901589249)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5 + 1] [i_7 - 1]))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)113)))))));
                                arr_28 [i_5] [i_5 + 1] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((11468204821182688523ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                                var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */int) ((((/* implicit */int) arr_17 [i_5] [i_5])) < (((/* implicit */int) (unsigned short)65535))))) : (((/* implicit */int) var_3))));
                                arr_29 [i_5] [(_Bool)0] [i_9] = ((/* implicit */signed char) ((unsigned short) arr_24 [i_5 - 2] [i_8] [i_5 - 2] [i_7 - 2] [i_5 - 2]));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_29 -= ((unsigned short) var_7);
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            for (signed char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                {
                    var_30 *= ((/* implicit */unsigned char) ((int) var_17));
                    arr_35 [i_5] [i_5] = ((/* implicit */short) (+(((/* implicit */int) arr_21 [i_5 + 1] [i_5 - 2]))));
                    arr_36 [i_5] [i_5] [i_5] = ((/* implicit */int) ((_Bool) arr_34 [i_5 + 1]));
                }
            } 
        } 
    }
}
