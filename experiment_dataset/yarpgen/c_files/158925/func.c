/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158925
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
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_7 [i_0] [(short)6] = ((/* implicit */_Bool) (+(max(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (unsigned char)145))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)14821))))) ? (((/* implicit */int) ((_Bool) -5956122414863092169LL))) : ((~(((/* implicit */int) (_Bool)1)))))));
                            var_18 = ((/* implicit */short) ((9223372028264841216LL) <= (-1767677085249926200LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 2; i_5 < 19; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((unsigned short) ((((1193108241) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)0)))) : (((long long int) arr_3 [i_1] [i_1 + 1] [i_1])))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned short) max((((/* implicit */int) ((signed char) var_14))), (1073741824)))))));
                            var_21 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((signed char) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-14826))) : (var_7)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(var_12)))) ? (((/* implicit */long long int) ((int) (unsigned char)145))) : (((long long int) (short)14846))))));
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((short) (+(((long long int) (short)0))))))));
    var_24 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    for (int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_22 [12] [i_7] [i_7] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (-4906864955791725162LL))));
            var_25 = ((/* implicit */long long int) 3918312135U);
            arr_23 [6LL] = ((/* implicit */unsigned int) (short)-14827);
        }
        /* LoopNest 2 */
        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) 
        {
            for (int i_9 = 1; i_9 < 22; i_9 += 1) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4906864955791725162LL)) ? (((/* implicit */int) (unsigned short)30099)) : (((/* implicit */int) (!(((/* implicit */_Bool) -329786920)))))))) ? (((unsigned int) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) var_0)) : (var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_26 [(signed char)4] [i_8 + 2] [i_8 + 2]))))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (int i_11 = 3; i_11 < 21; i_11 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */short) -623641475533942760LL);
                                arr_33 [i_9 - 1] [i_9] [i_9 + 1] [i_9] [i_9 - 1] = ((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_9))), (arr_15 [i_6] [i_6] [i_6])));
                                arr_34 [i_10] [16U] [i_10] [i_10] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)83)) ? (((((((/* implicit */_Bool) arr_28 [i_9])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (signed char)-35)))) + (((int) -1268528089)))) : (((/* implicit */int) arr_17 [i_6] [i_6]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
