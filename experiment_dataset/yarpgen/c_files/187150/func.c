/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 187150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=187150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/187150
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (max((var_8), (((/* implicit */int) var_16))))))) : (max((((/* implicit */unsigned int) max(((short)9494), (((/* implicit */short) var_7))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_15)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        var_18 += ((/* implicit */unsigned int) ((max(((-(13936988682276244372ULL))), (((/* implicit */unsigned long long int) min((-1462290476), (((/* implicit */int) arr_0 [(_Bool)0] [i_0 + 1]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((((/* implicit */int) (unsigned short)57549)), (var_6))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 3; i_1 < 22; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_1] [i_3] = ((/* implicit */long long int) var_1);
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_8 [i_0] [18LL] [i_2] [i_0])) || (((/* implicit */_Bool) var_2)))) ? (min((((/* implicit */long long int) var_7)), (arr_1 [i_2] [i_2]))) : (((/* implicit */long long int) 1360673277U)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (unsigned short)32553))));
        }
        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */unsigned long long int) var_16);
                        arr_21 [i_6] [i_0] [18] [i_6 - 1] = ((/* implicit */_Bool) arr_14 [(unsigned char)7] [(unsigned char)7] [i_5]);
                        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_15))));
                        var_23 = ((/* implicit */unsigned short) var_11);
                        arr_22 [i_4] [i_4] [i_5] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) arr_1 [i_0] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_1 [i_0] [i_4]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_12)), (var_16)))) ? ((~(((/* implicit */int) arr_9 [8U] [i_4 - 2] [i_5] [i_6 - 2])))) : (((/* implicit */int) max(((unsigned short)4652), (((/* implicit */unsigned short) var_1))))))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */short) (unsigned short)48101);
        }
        for (unsigned short i_7 = 1; i_7 < 23; i_7 += 1) 
        {
            arr_25 [(signed char)7] [i_0] [i_0] = ((/* implicit */int) arr_9 [i_7 + 1] [i_7] [(_Bool)1] [i_0]);
            var_25 = ((/* implicit */unsigned long long int) -1462290451);
            var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)4)) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_7] [i_0])) : (var_10))) : (min((var_2), (((/* implicit */unsigned long long int) var_3)))))))));
            /* LoopNest 2 */
            for (unsigned char i_8 = 2; i_8 < 22; i_8 += 4) 
            {
                for (unsigned int i_9 = 1; i_9 < 22; i_9 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) != (((/* implicit */unsigned long long int) arr_31 [i_0 - 1] [22U] [i_0] [i_0])))) ? (((((unsigned int) var_0)) >> (((((((/* implicit */_Bool) arr_31 [i_9] [(unsigned short)16] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [(unsigned char)14] [i_8 - 1] [(_Bool)1] [i_8 - 1])) : (((/* implicit */int) (signed char)-121)))) + (137))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                        arr_33 [i_0] = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
        }
    }
    var_28 = ((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) var_15))));
}
