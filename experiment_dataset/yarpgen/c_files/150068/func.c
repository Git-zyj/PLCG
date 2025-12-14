/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 150068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=150068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/150068
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)-2048)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-60)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-29866)))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_10 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1 - 1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((short) (short)-32766));
                        arr_13 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (arr_11 [i_1 - 1]) : (((/* implicit */unsigned long long int) ((unsigned int) var_2)))));
                        /* LoopSeq 3 */
                        for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            var_11 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)18227)) ? (((/* implicit */int) (unsigned char)13)) : (2147483647)));
                            arr_16 [i_4] [i_4] [i_3] [i_2] [i_1] [i_4] = ((/* implicit */unsigned long long int) (-(arr_0 [i_1 + 1] [i_1])));
                            arr_17 [i_0] [i_1] [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) var_4);
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                        {
                            var_12 = ((/* implicit */int) 3264854660U);
                            var_13 = ((/* implicit */unsigned long long int) ((2911576492U) < (((/* implicit */unsigned int) var_7))));
                            var_14 = ((/* implicit */_Bool) (~(arr_15 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5])));
                            var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-2657))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned short) (signed char)127);
                            arr_24 [i_0] [i_6] [i_2] [i_3] [i_6] = ((/* implicit */short) ((1023U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_9))))));
                            var_17 = ((/* implicit */short) (~(arr_1 [i_1] [i_1 + 1])));
                            arr_25 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */unsigned long long int) var_0);
                        }
                    }
                } 
            } 
        }
        for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 4) 
        {
            arr_30 [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) (short)(-32767 - 1)))), (max((((/* implicit */int) arr_9 [i_7] [i_7] [i_0])), (var_7)))))) ? (((/* implicit */unsigned int) min((min((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_7] [i_7]), (((/* implicit */int) arr_18 [i_7])))), (((((/* implicit */_Bool) 1872475215)) ? (arr_0 [i_0] [i_7]) : (((/* implicit */int) var_1))))))) : ((~((-(var_4)))))));
            var_18 = (-(((/* implicit */int) var_0)));
            /* LoopNest 2 */
            for (short i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (int i_9 = 2; i_9 < 11; i_9 += 2) 
                {
                    {
                        arr_39 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned int) ((int) arr_10 [i_0] [i_7] [i_8] [i_9] [i_8]))), (var_3)));
                        var_19 = ((/* implicit */int) ((signed char) var_6));
                        var_20 = ((/* implicit */short) ((int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) << (((((/* implicit */int) (signed char)25)) - (4)))))) > (var_4))));
                        arr_40 [i_0] [i_7] [i_9] = ((/* implicit */long long int) var_5);
                        arr_41 [i_0] [i_7] [i_8] [i_9] = ((/* implicit */signed char) (~((~(max((((/* implicit */int) var_0)), (arr_5 [i_9] [i_0])))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((-(var_3))), (((/* implicit */unsigned int) var_0))))) && (((/* implicit */_Bool) arr_34 [i_0]))));
            arr_42 [i_0] [i_7] [i_7] = ((/* implicit */unsigned short) -1971549915);
        }
        var_22 = ((/* implicit */long long int) var_2);
    }
    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-59)) + (2147483647))), (((/* implicit */int) var_8))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((_Bool) 1430667244U))) : (((((/* implicit */_Bool) 2147483647)) ? (var_9) : (((/* implicit */int) arr_43 [i_10] [i_10])))))) : (((((/* implicit */int) var_5)) * (((/* implicit */int) arr_44 [i_10]))))));
        arr_45 [i_10] = ((/* implicit */int) min((((unsigned long long int) 5447039319983706540LL)), (((/* implicit */unsigned long long int) var_1))));
    }
    var_24 = ((/* implicit */unsigned int) ((int) (signed char)50));
}
