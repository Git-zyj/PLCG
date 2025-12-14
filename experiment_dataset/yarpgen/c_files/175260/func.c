/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 175260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=175260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/175260
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
    var_11 = ((/* implicit */unsigned char) min((var_11), (((unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) & (((/* implicit */int) var_6))))) >= (var_9))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_9))))));
        var_12 = ((/* implicit */int) arr_1 [i_0]);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_7 [i_0] [i_0] = ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_4 [19ULL] [i_0 + 3] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (short)27013))))))))) && (((/* implicit */_Bool) ((unsigned char) 8186153062997766994LL))));
            var_13 = ((/* implicit */unsigned int) min((var_13), ((+(min((((964062345U) % (1441199806U))), (((/* implicit */unsigned int) arr_1 [i_1]))))))));
            var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_4 [i_0] [i_0 + 3] [i_0]) / (((/* implicit */long long int) ((arr_6 [i_0] [i_0] [(unsigned char)6]) / (((/* implicit */int) (signed char)(-127 - 1))))))))) % ((~(13835407792825398728ULL)))));
        }
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    {
                        arr_16 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((arr_13 [i_0] [i_2 - 2] [i_2] [i_4]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5929))))))))) <= (min((((((/* implicit */_Bool) (short)5929)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (13835407792825398741ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))) : (-3636756938852538604LL))))))));
                        var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((-232397315), (((/* implicit */int) (unsigned char)181))))))) ? (((/* implicit */int) ((arr_4 [i_0 - 1] [i_2 - 2] [i_3]) != (((/* implicit */long long int) (~(var_9))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
                        var_16 = ((/* implicit */unsigned char) ((3541201256214632959LL) + (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (!(arr_10 [i_0]))))))))));
                    }
                } 
            } 
        } 
        arr_17 [i_0] [i_0] = ((/* implicit */int) 3636756938852538599LL);
    }
    for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
    {
        arr_22 [12U] = ((/* implicit */signed char) (~((~((-(var_9)))))));
        var_17 = ((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [6ULL]);
        arr_23 [1U] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) == (min((((((/* implicit */_Bool) (unsigned char)111)) ? (arr_14 [i_5] [i_5] [10U] [i_5]) : (((/* implicit */unsigned long long int) arr_6 [i_5] [4ULL] [i_5])))), (((((/* implicit */_Bool) -2063147347)) ? (13835407792825398728ULL) : (((/* implicit */unsigned long long int) 536870912))))))));
        arr_24 [i_5] = (unsigned char)75;
    }
    for (unsigned char i_6 = 2; i_6 < 23; i_6 += 4) 
    {
        var_18 = ((/* implicit */int) (signed char)-14);
        var_19 = ((/* implicit */unsigned char) min((((/* implicit */long long int) 1800145613)), (var_4)));
        var_20 = ((/* implicit */unsigned int) ((unsigned long long int) ((int) arr_27 [i_6])));
    }
}
