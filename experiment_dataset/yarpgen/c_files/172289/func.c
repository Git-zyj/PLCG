/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 172289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=172289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/172289
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) (+(min((min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_6))), ((+(arr_0 [i_0])))))));
        var_16 += ((/* implicit */long long int) min(((-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) / (arr_0 [i_0]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)21)))))));
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_11 [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) max((arr_3 [i_2 + 1]), (((/* implicit */unsigned short) (unsigned char)24))))) % ((~(((/* implicit */int) (_Bool)1))))));
                    arr_12 [i_3] = ((/* implicit */signed char) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_1]))))))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned short) max((min(((short)0), (((/* implicit */short) (!(((/* implicit */_Bool) (short)18752))))))), (((/* implicit */short) var_8))));
    }
    for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) max(((_Bool)1), ((_Bool)0)));
        /* LoopNest 3 */
        for (unsigned short i_5 = 1; i_5 < 24; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    {
                        arr_24 [i_4] [i_5] [i_6] [i_4] [i_4] = ((/* implicit */unsigned int) min(((!((!(((/* implicit */_Bool) var_13)))))), ((!(((/* implicit */_Bool) min((arr_16 [22LL] [i_7]), (((/* implicit */long long int) var_10)))))))));
                        var_18 -= ((/* implicit */unsigned short) var_3);
                        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) 4294967295U)) & (var_6)))))));
                    }
                } 
            } 
        } 
    }
    var_20 += ((/* implicit */short) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_0))))), (var_6)))));
    var_21 = ((/* implicit */unsigned int) ((unsigned long long int) var_7));
    var_22 = ((/* implicit */long long int) (short)-1);
}
