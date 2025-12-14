/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 137829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=137829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/137829
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
    var_12 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)10383)), ((unsigned short)47724)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 2) 
            {
                for (unsigned int i_3 = 3; i_3 < 22; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 2) 
                    {
                        {
                            var_13 *= var_9;
                            var_14 &= ((/* implicit */short) (!(((/* implicit */_Bool) (short)845))));
                            var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1055471687U)) ? (6395503189536752041ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)838)))))) ? (((/* implicit */int) (short)-7904)) : (((/* implicit */int) (short)845))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (5057835864443565700ULL) : (((/* implicit */unsigned long long int) 3758096384U))));
        }
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3758096384U)) ? (14172841186101939494ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) (+(3758096384U)))), (12606311497806614080ULL))) > ((~(((((/* implicit */_Bool) (short)-836)) ? (var_6) : (((/* implicit */unsigned long long int) var_11)))))))))));
    }
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_24 [i_8] [i_7] [i_6] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) arr_17 [i_5]));
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((0U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-10385))))) ? (arr_6 [i_8] [i_7] [(_Bool)1] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-10375)) > (((/* implicit */int) (unsigned short)54308)))))))))));
                    }
                    arr_25 [i_5] [(short)4] [i_7] [i_7] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (short)0)))), (((/* implicit */int) ((short) (short)10390)))));
                    var_19 = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (3758096384U) : (12U)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min(((+(var_6))), (((/* implicit */unsigned long long int) var_2))));
}
