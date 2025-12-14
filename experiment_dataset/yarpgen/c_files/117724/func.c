/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 117724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=117724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/117724
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
    var_20 = ((/* implicit */unsigned long long int) var_19);
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_17)) : (var_4))), (((/* implicit */int) var_18)))), (-124722351)));
                                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) var_18)))))));
                                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned short)18] [i_3] [i_4])) ? (885146422) : (((/* implicit */int) var_11))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */int) var_7);
                }
            } 
        } 
        arr_12 [i_0] = ((/* implicit */short) (+(max((min((-885146430), (-885146422))), (((/* implicit */int) (unsigned short)3444))))));
        var_25 = ((/* implicit */signed char) var_9);
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_17 [i_0] [i_5] [i_5] = ((/* implicit */unsigned short) 885146432);
            var_26 = ((/* implicit */signed char) max(((unsigned short)13516), ((unsigned short)52020)));
        }
        for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
            var_28 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
            var_29 = ((/* implicit */unsigned short) min((((/* implicit */int) max(((signed char)-54), (var_15)))), ((~(((/* implicit */int) var_11))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_7 = 3; i_7 < 14; i_7 += 3) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned short) var_3);
        var_30 = ((/* implicit */unsigned long long int) (unsigned short)13538);
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
    {
        arr_27 [i_8] = ((/* implicit */short) max((max((arr_6 [i_8] [i_8] [2LL] [i_8]), (((/* implicit */long long int) arr_2 [11LL] [i_8])))), (((/* implicit */long long int) var_4))));
        arr_28 [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) var_15))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) var_16);
                        var_32 = ((/* implicit */unsigned char) arr_21 [i_9]);
                        var_33 = ((/* implicit */unsigned char) var_2);
                        arr_40 [i_8] [i_8] [i_8] [i_8] [i_11] [i_10] = ((/* implicit */signed char) (unsigned short)13538);
                        arr_41 [i_8] [i_10] = ((/* implicit */signed char) (~(var_10)));
                    }
                    arr_42 [i_8] [i_10] [i_10] = ((/* implicit */unsigned char) min(((unsigned short)51995), (((/* implicit */unsigned short) max((arr_29 [i_10] [i_9] [i_8]), (((/* implicit */short) var_0)))))));
                    var_34 = max((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)51988))))) : (arr_34 [i_10] [i_9] [i_10] [i_10])))));
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned short) var_15);
}
