/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 106051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=106051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/106051
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((min((-5505103649307990127LL), (((/* implicit */long long int) (~(408575621)))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            arr_6 [i_0] [i_1 - 1] = ((/* implicit */_Bool) var_0);
            arr_7 [i_0 - 3] = ((/* implicit */unsigned short) -1715537965);
        }
        arr_8 [i_0] = ((/* implicit */unsigned short) ((((max((-408575624), (((/* implicit */int) arr_1 [i_0])))) != (((((/* implicit */int) (short)-32597)) - (((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [(short)13]))))), ((unsigned short)1024))))) : (((arr_0 [i_0]) ? (208596632U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3])))))));
        arr_9 [i_0 - 4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1688751637)) ? (((/* implicit */int) (_Bool)0)) : (min((-408575622), (1335204593)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_12 [i_2] = var_8;
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) (unsigned short)65535)))));
    }
    var_12 = ((/* implicit */signed char) (_Bool)1);
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */signed char) (short)-1);
        arr_18 [i_3] [i_3] = (+(4795733231531670705LL));
        arr_19 [i_3] [i_3] = ((int) (((+(((/* implicit */int) arr_5 [i_3])))) * (((/* implicit */int) (unsigned short)8))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 1) /* same iter space */
    {
        arr_24 [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 262142))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 21; i_6 += 3) 
            {
                {
                    arr_30 [i_4] [1LL] [i_4] = ((/* implicit */unsigned long long int) min((-2685842090243886418LL), (((/* implicit */long long int) arr_1 [i_5]))));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 1) 
                    {
                        for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                        {
                            {
                                arr_38 [i_5] [i_5] [i_4] [i_5] [(short)7] [i_5] = ((/* implicit */_Bool) (-(((2752494564649135077LL) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4))))))));
                                arr_39 [i_5] [i_4] = ((/* implicit */short) (+((~(arr_33 [i_4 - 2] [i_4] [i_4] [i_4])))));
                                arr_40 [13] [i_7] [i_4] [i_7 - 2] [i_4] [12LL] [i_4] = ((/* implicit */long long int) arr_31 [i_4] [i_5] [i_4] [i_4]);
                            }
                        } 
                    } 
                    arr_41 [i_4 - 1] [i_5] [i_4] = ((/* implicit */signed char) var_0);
                    arr_42 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) 4194303U))));
                    arr_43 [i_4] [i_5] [i_4] [16U] = 1342358799U;
                }
            } 
        } 
    }
    for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        arr_48 [i_9] [i_9] = ((/* implicit */long long int) max((((((/* implicit */int) min((((/* implicit */short) arr_0 [(short)0])), (var_2)))) * (min((((/* implicit */int) var_3)), (408575622))))), ((-(((/* implicit */int) (unsigned char)33))))));
        arr_49 [i_9] [i_9] = ((/* implicit */short) arr_46 [i_9]);
        arr_50 [i_9] = ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) max((((/* implicit */int) (short)8)), ((-2147483647 - 1)))))));
    }
}
