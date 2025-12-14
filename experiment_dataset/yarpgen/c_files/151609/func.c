/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 151609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=151609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/151609
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
    var_14 = ((/* implicit */short) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [i_0 + 1] = var_12;
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_1);
    }
    for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-47)) % (((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)45808))))) ? (min((var_5), (((/* implicit */unsigned int) (unsigned char)127)))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (16U))))) : (var_0)));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)27308)) ? (4732742758728116428LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        arr_15 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_10 [i_1] [i_2] [i_1] [i_2]))));
                        var_16 = ((/* implicit */_Bool) min(((~(3045289087787713181LL))), (((/* implicit */long long int) arr_0 [i_4] [i_3]))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            var_17 = ((/* implicit */short) ((long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) % (-9223372036854775802LL))) << (((/* implicit */int) ((_Bool) arr_13 [i_1]))))));
            arr_18 [i_1] [i_5] [i_5] = ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (unsigned short)9339)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (_Bool)0)))))) * (((/* implicit */int) (unsigned char)130))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((min((((/* implicit */long long int) ((arr_10 [i_1] [(_Bool)1] [i_1 + 3] [i_1]) ? (arr_11 [i_5] [i_5] [i_5 + 1] [8ULL]) : (((/* implicit */int) var_2))))), (((long long int) (unsigned char)140)))) | (((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_13 [i_5])))))))))));
        }
        var_19 &= ((/* implicit */_Bool) ((unsigned char) ((long long int) ((long long int) arr_0 [i_1] [(signed char)14]))));
    }
    var_20 = ((/* implicit */signed char) var_13);
}
