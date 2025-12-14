/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 148976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=148976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/148976
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (min((15U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13763360097270174082ULL))))))) : (((/* implicit */unsigned int) (~(arr_1 [i_0 + 2]))))));
        var_19 = ((/* implicit */unsigned short) arr_1 [6LL]);
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((arr_2 [i_0 + 1]) <= (arr_3 [i_0 + 1]))))));
    }
    var_20 = (-(((((/* implicit */_Bool) max((626013887U), (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26542))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38983))) + (var_13))))));
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */signed char) max(((-(arr_3 [i_1]))), (max((arr_3 [i_1]), (arr_3 [i_1])))));
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                {
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */int) var_5);
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned long long int) min((max((((/* implicit */unsigned long long int) (unsigned short)38983)), (arr_2 [i_1]))), (arr_13 [14LL] [i_2 - 1] [i_2 - 1])))))));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((arr_8 [i_1] [i_1]) - (((/* implicit */int) var_5))));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 16; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((-1686595356), (((/* implicit */int) (short)17521))));
                        var_24 = ((/* implicit */short) max(((+(arr_20 [i_6] [i_4] [i_1]))), (min((arr_20 [3] [i_4] [i_4]), (arr_20 [2] [i_4] [i_5])))));
                    }
                } 
            } 
            arr_23 [i_4] [i_1] = ((/* implicit */unsigned int) var_12);
            var_25 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) arr_10 [i_4])), (min((((/* implicit */long long int) var_1)), (-7391454146685058073LL))))), (((/* implicit */long long int) 1447179877U))));
            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 12U)) || (((/* implicit */_Bool) (signed char)25))));
            arr_24 [i_4] [i_4] = ((/* implicit */long long int) arr_8 [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            var_27 = arr_9 [i_7] [i_7];
            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967283U)) ? (arr_13 [i_1] [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1] [i_1])))));
            var_29 = ((/* implicit */unsigned int) var_5);
        }
    }
    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 2; i_9 < 18; i_9 += 1) 
        {
            arr_34 [i_8] = ((/* implicit */long long int) (~(286520701166085375ULL)));
            var_30 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4294967272U)) * (1596174173121931027ULL)));
            var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -6525696026761161521LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (min((var_3), (((/* implicit */unsigned long long int) (short)27115)))))) > ((-(arr_2 [i_8])))));
        }
        var_32 = ((/* implicit */unsigned int) var_10);
    }
}
