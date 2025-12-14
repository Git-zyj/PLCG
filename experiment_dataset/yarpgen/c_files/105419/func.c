/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 105419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=105419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/105419
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0])))), ((!(((/* implicit */_Bool) arr_3 [i_0])))))))));
        var_17 |= ((/* implicit */unsigned char) min((arr_0 [i_0]), (((/* implicit */int) ((unsigned char) arr_2 [i_0])))));
        arr_4 [i_0] = ((/* implicit */short) ((int) min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        arr_8 [i_1] |= ((/* implicit */unsigned short) arr_6 [i_1] [i_1]);
        arr_9 [i_1] |= ((/* implicit */short) 1043454942U);
        var_18 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_5 [i_1] [i_1]) / (((/* implicit */int) (signed char)13)))), ((+(arr_7 [i_1])))))) ? (((((/* implicit */int) ((((/* implicit */int) var_14)) > (arr_5 [i_1] [i_1])))) % (((((/* implicit */int) arr_6 [i_1] [i_1])) ^ (arr_5 [i_1] [i_1]))))) : (max((arr_7 [i_1]), (((var_0) ? (((/* implicit */int) (unsigned char)22)) : (arr_7 [i_1])))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((arr_7 [i_2]) ^ (((/* implicit */int) (unsigned char)248))))))) ? (((long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)8)) >> (((/* implicit */int) ((max((((/* implicit */int) (short)-12)), (arr_7 [i_2]))) != (((/* implicit */int) arr_11 [i_2])))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 15; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3251512351U)) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3] [i_4]))) ^ (max((((/* implicit */unsigned int) (signed char)117)), (1043454942U))))))));
                    arr_19 [i_2] = ((/* implicit */unsigned long long int) ((short) (unsigned short)20740));
                }
            } 
        } 
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2]))));
    }
    /* LoopNest 3 */
    for (short i_5 = 2; i_5 < 20; i_5 += 1) 
    {
        for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 20; i_7 += 4) 
            {
                {
                    arr_29 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)117))))))));
                    var_21 -= var_15;
                }
            } 
        } 
    } 
}
