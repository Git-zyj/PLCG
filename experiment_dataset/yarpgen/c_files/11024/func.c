/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 11024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=11024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/11024
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_3] [i_4]);
                                var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-8213543792133187566LL)))) ? (((((/* implicit */unsigned long long int) 8213543792133187565LL)) / (17461267101331890671ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_0 - 2])))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 10; i_6 += 2) 
                    {
                        for (long long int i_7 = 3; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_19 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) / (arr_10 [i_0] [i_5] [10ULL] [i_7] [10ULL] [i_6])))), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1079238901464511456LL)) && ((!((_Bool)1))))))) : (((((/* implicit */_Bool) (~(985476972377660943ULL)))) ? (arr_21 [i_0] [i_0] [i_0] [i_7 - 1] [i_7 + 1]) : ((-(arr_20 [i_0] [i_1] [i_6] [i_7]))))));
                                var_20 = ((/* implicit */long long int) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]));
                            }
                        } 
                    } 
                } 
                var_21 &= 3712591821946103819LL;
                var_22 *= ((/* implicit */unsigned long long int) ((5561787713694227482LL) / ((((_Bool)1) ? (4301402880408199748LL) : (-8213543792133187566LL)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_8 = 4; i_8 < 14; i_8 += 3) 
    {
        for (unsigned long long int i_9 = 2; i_9 < 13; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_23 = arr_25 [i_9 - 1] [i_8];
                    var_24 &= ((/* implicit */_Bool) var_12);
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 15; i_12 += 3) 
                        {
                            {
                                arr_33 [11LL] [i_9 - 2] [i_10] [i_11] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 8213543792133187565LL)) > (((985476972377660959ULL) | (0ULL)))))) == (((/* implicit */int) (!(var_2))))));
                                arr_34 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)22574)), (1009612407839135958LL)))) >= (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)33034))))) | (min((var_0), (((/* implicit */unsigned long long int) (short)-19863))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
