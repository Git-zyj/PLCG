/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 124854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=124854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/124854
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_11 [(unsigned short)9] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) 2922232489U);
                    arr_12 [i_0 - 1] [(signed char)9] [i_0 - 1] = ((/* implicit */_Bool) var_0);
                }
            } 
        } 
        arr_13 [i_0 + 2] = ((/* implicit */int) (-(((((/* implicit */long long int) arr_10 [16ULL] [(unsigned short)16])) + (arr_3 [i_0])))));
    }
    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_18 [i_3] [i_3 + 1] = ((/* implicit */int) ((_Bool) (+(2922232489U))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 4; i_5 < 16; i_5 += 2) 
            {
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                {
                    {
                        var_13 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((var_7) / (1372734807U)))))))));
                        arr_27 [i_6] [16LL] [i_4] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9544718200941793546ULL)) ? (((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))) : (((/* implicit */int) ((((/* implicit */int) (short)8303)) < (((/* implicit */int) min((var_1), (arr_20 [i_6])))))))));
                        var_14 = ((/* implicit */short) -7900838000706249LL);
                        arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] = ((((/* implicit */long long int) (((~(((/* implicit */int) (short)0)))) + ((+(((/* implicit */int) (_Bool)1))))))) / (min(((+(arr_9 [i_3] [i_3] [18] [i_3]))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)41125)) < (((/* implicit */int) var_1))))))));
                        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-2))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) 2922232514U);
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 16; i_7 += 1) 
        {
            for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_18 = max((((((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) -2792671719995122026LL)))))) % (var_5))), (((/* implicit */long long int) 2147483639)));
                }
            } 
        } 
    }
}
