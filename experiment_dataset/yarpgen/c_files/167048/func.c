/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 167048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=167048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/167048
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
    var_10 = ((/* implicit */short) var_2);
    var_11 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_12 += ((/* implicit */unsigned long long int) arr_4 [i_0]);
                        arr_10 [i_0] [i_0] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_3])) ? (-1004206395) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_8)) ? (-1496610571430745744LL) : (var_1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (arr_0 [(_Bool)1]) : (((/* implicit */unsigned long long int) var_8))))))))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) arr_0 [i_0]);
        var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (1048575) : (((/* implicit */int) (short)1)))), (((-1) % (((/* implicit */int) (short)16))))))))))));
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((var_3) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))))))), ((~(4024230422U))))))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        arr_15 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_1)))) ? (var_9) : ((-(((/* implicit */int) arr_3 [i_4] [i_4]))))))) == ((+(var_0)))));
        var_15 = ((/* implicit */short) arr_5 [i_4] [(short)11] [i_4]);
        var_16 = ((/* implicit */int) arr_13 [i_4]);
    }
    for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
    {
        var_17 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((6098092618598998448LL), (((/* implicit */long long int) (-(var_8))))))) + (((((/* implicit */_Bool) min((arr_16 [i_5] [18ULL]), (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [(_Bool)0]))) : (var_0)))))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((unsigned long long int) ((arr_16 [i_5] [13ULL]) << (((arr_16 [i_5] [i_5]) - (10783699625292585037ULL)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))))))));
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) var_6))));
        var_20 &= ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_21 = ((/* implicit */long long int) 275482765);
        var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6])) ? (((/* implicit */int) arr_17 [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_6] [i_6]))));
    }
}
