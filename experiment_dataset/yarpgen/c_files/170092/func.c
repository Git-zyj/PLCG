/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 170092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=170092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/170092
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
    var_15 = 3563668802U;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_16 = (_Bool)0;
                    var_17 = ((/* implicit */unsigned short) arr_8 [i_0] [11] [11] [i_0]);
                    arr_10 [i_1] [i_2] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) && (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2]))))), (max((arr_4 [i_1] [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) 286593188U)) || (((/* implicit */_Bool) 2147418112ULL)))))));
                                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) -438051601)) == (3U)))), (min((((arr_8 [i_0] [(unsigned char)1] [i_0] [(unsigned char)1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))), (((/* implicit */unsigned int) arr_9 [i_0] [i_1])))))))));
                                arr_15 [i_0] [i_1] [(unsigned short)5] [i_0] = ((/* implicit */unsigned long long int) arr_6 [(unsigned char)10] [(unsigned char)10] [(unsigned char)10]);
                                arr_16 [4ULL] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = (((+(((((/* implicit */_Bool) 286593188U)) ? (((/* implicit */unsigned long long int) 4008374087U)) : (2147418097ULL))))) > (((/* implicit */unsigned long long int) max((((4008374107U) << (((18446744071562133504ULL) - (18446744071562133484ULL))))), (4008374107U)))));
                                arr_17 [i_0] [i_0] [i_0] [9] [i_0] = ((/* implicit */unsigned short) min(((~(2720926083U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [3ULL] [(_Bool)1] [i_2] [11] [3ULL])) ? (((/* implicit */int) ((((/* implicit */_Bool) 2430031533U)) && ((_Bool)1)))) : (((int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(unsigned char)3] [i_1] [i_2] &= (-(((/* implicit */int) (unsigned short)1568)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((-955783008952468114LL), (((/* implicit */long long int) (unsigned char)2)))), (((/* implicit */long long int) ((286593193U) | (((/* implicit */unsigned int) var_0)))))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)1564))))))) : (var_10)));
}
