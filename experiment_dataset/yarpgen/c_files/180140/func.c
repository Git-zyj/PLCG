/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 180140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=180140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/180140
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
    var_11 = ((/* implicit */unsigned short) ((1451635304570913010LL) - (1451635304570913000LL)));
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) & (min((-1451635304570912993LL), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */unsigned int) 5)) : (55076029U))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 1451635304570912978LL)))))) ? (min((((long long int) arr_7 [i_0])), (((/* implicit */long long int) (~(((/* implicit */int) (short)9402))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((1451635304570913009LL) / (1451635304570912983LL))))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_3] [(unsigned short)4] [(short)1] [i_4] = ((/* implicit */_Bool) -1451635304570912994LL);
                                var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) (unsigned short)43776))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2 + 1])) ? (arr_5 [i_0] [i_1] [i_2 - 2]) : (arr_5 [i_3] [(unsigned short)5] [i_2 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) var_3))))))));
                                var_14 = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                                arr_15 [(unsigned short)2] [i_3] [i_2 - 2] [i_0] [i_0] = ((/* implicit */long long int) min((max((min((((/* implicit */unsigned long long int) var_7)), (arr_5 [(short)0] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((long long int) var_1))))), (((/* implicit */unsigned long long int) arr_1 [i_2 - 2] [i_2 - 1]))));
                                arr_16 [i_2 - 2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(1868700550)))), (max((10458175244396276650ULL), (((/* implicit */unsigned long long int) (short)-32750))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [(short)3] = ((/* implicit */unsigned long long int) (((-(arr_10 [i_1] [i_1]))) % (arr_10 [i_0] [i_1])));
                    arr_18 [i_0] [i_1] [i_0] [(unsigned short)5] = ((unsigned short) min((min((((/* implicit */long long int) 55076045U)), (1451635304570913001LL))), (((/* implicit */long long int) ((1868700557) >= (((/* implicit */int) (unsigned short)1)))))));
                    var_15 = ((/* implicit */short) 8078930269768663417ULL);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        var_16 = ((/* implicit */unsigned long long int) -1090953826);
        arr_23 [i_5] = ((/* implicit */unsigned int) ((long long int) arr_7 [i_5]));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_17 = ((/* implicit */short) (+(((var_3) ? (-1451635304570912997LL) : (((/* implicit */long long int) arr_29 [i_5] [(short)4] [i_7]))))));
                        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))));
                        var_19 = ((/* implicit */_Bool) (-(((unsigned long long int) -1868700539))));
                    }
                } 
            } 
        } 
        arr_33 [8ULL] = ((/* implicit */short) ((((unsigned long long int) var_5)) - (((/* implicit */unsigned long long int) -7LL))));
    }
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_10))));
}
