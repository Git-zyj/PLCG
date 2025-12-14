/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 108954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=108954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/108954
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
    var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (var_13)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_0 [i_0]);
                    var_17 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) max(((short)132), (var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12U] [12U])))))) ? (arr_1 [i_0]) : (((/* implicit */int) (short)32753))))));
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_4 [2] [i_0])) : (((/* implicit */int) var_4))))) ? (arr_2 [i_0] [i_0]) : (3285476940U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)113))) : (max((((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) : (10709035678402020714ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (arr_2 [i_0] [i_0])))))))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        var_20 = ((((/* implicit */_Bool) arr_1 [i_3])) ? (min((((/* implicit */int) (_Bool)1)), (1769006344))) : (((/* implicit */int) max((max((var_4), ((signed char)-121))), (min((((/* implicit */signed char) (_Bool)1)), ((signed char)-87)))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) var_2))));
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 3285476940U)) ? (-835894911) : (((/* implicit */int) (signed char)62)))))))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 4; i_6 < 11; i_6 += 3) 
                {
                    for (short i_7 = 1; i_7 < 11; i_7 += 1) 
                    {
                        {
                            arr_19 [i_7] [(short)11] [(short)11] [i_5] [i_7] [12] = ((/* implicit */short) (~(min(((+(((/* implicit */int) arr_4 [i_3] [i_4])))), (((/* implicit */int) (short)-4))))));
                            var_23 -= ((/* implicit */int) 4294967290U);
                        }
                    } 
                } 
            } 
        }
        var_24 *= ((/* implicit */unsigned long long int) arr_16 [i_3] [i_3] [i_3] [i_3] [0]);
        var_25 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 0)), (246761872095231205ULL)));
    }
    var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_0))));
}
