/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 188326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=188326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/188326
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
    var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((3959563605U), (((/* implicit */unsigned int) -729067084)))) >> (((((long long int) var_18)) + (21107LL)))))) ? (((((/* implicit */_Bool) ((488187549) ^ (((/* implicit */int) (signed char)-118))))) ? (var_17) : (min((var_8), (((/* implicit */unsigned int) 729067111)))))) : (((/* implicit */unsigned int) max((((((-1493624685) + (2147483647))) >> (((var_1) - (1690932808))))), (((/* implicit */int) min(((short)1920), (((/* implicit */short) (_Bool)1))))))))));
    var_20 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) var_15)))) && (((/* implicit */_Bool) ((var_17) / (((/* implicit */unsigned int) ((/* implicit */int) (short)15867)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_2)))))))) : (var_1)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), ((signed char)-112)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (unsigned char)238))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_1 [i_0]))))) : (max((((/* implicit */unsigned long long int) (signed char)-81)), (14293238699540997351ULL)))));
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (unsigned short)18661))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_0] [i_0]);
        var_24 = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (1136891379) : ((-2147483647 - 1)))));
    }
    var_25 = (-(255));
    var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
}
