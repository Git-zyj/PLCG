/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 134810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=134810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/134810
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
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) arr_0 [i_0] [i_0]));
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 15; i_3 += 2) 
                {
                    {
                        var_19 = min((var_17), (((arr_0 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) max(((signed char)-20), ((signed char)-39))))))));
                        var_20 = ((/* implicit */int) min((((/* implicit */long long int) (short)27428)), (((max((arr_4 [i_3 + 1]), (var_5))) % (((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-120))))))));
                        var_21 = ((/* implicit */int) (~((+(var_5)))));
                    }
                } 
            } 
            arr_12 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) 1006632960LL)))) ? (2258116983280655979LL) : (29LL)));
            arr_13 [i_0] = ((/* implicit */short) -6748670576667305322LL);
            var_22 = ((/* implicit */signed char) ((long long int) var_11));
        }
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            var_23 = (~(((((/* implicit */_Bool) max((((/* implicit */int) (short)26853)), (var_3)))) ? (((/* implicit */long long int) var_3)) : (arr_10 [i_4] [i_4] [i_0] [i_0]))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) -3799448863063786296LL))));
            var_25 = ((/* implicit */int) ((((/* implicit */long long int) max((var_10), (arr_2 [i_0] [i_0])))) | (max((((/* implicit */long long int) (signed char)(-127 - 1))), (var_17)))));
            var_26 = ((/* implicit */short) var_15);
            var_27 *= ((((/* implicit */_Bool) (short)2551)) ? (0LL) : (1067087537605016190LL));
        }
        var_28 = ((/* implicit */int) var_14);
        var_29 = ((min((((/* implicit */int) var_11)), (var_16))) >> (((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((var_2) + (((/* implicit */long long int) 0)))))) + (42LL))));
        var_30 = 307785652;
    }
    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)8053)) ? (var_1) : (var_7)))) >= (var_17))))));
}
