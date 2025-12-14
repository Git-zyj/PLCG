/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 15019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=15019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/15019
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_10 [i_0 + 1] [i_0] [i_0 + 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 274743689216LL)) ? (((/* implicit */long long int) 8355840U)) : (288230367561777152LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)45898)) ? (4160749568U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_11 *= ((/* implicit */int) (!((!(var_1)))));
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)0))))) == (-274743689216LL)));
                                var_12 = (-(((unsigned int) var_10)));
                                var_13 = ((/* implicit */unsigned short) arr_4 [i_1 - 2] [i_0] [i_1 - 1]);
                                arr_18 [i_0 - 3] [i_0 - 3] [i_2] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)24642)) ? (-274743689210LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 2]))))) == (((/* implicit */long long int) (-(((/* implicit */int) arr_11 [i_0] [i_0 - 3] [i_0 - 2]))))))))) <= (((unsigned int) ((long long int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_14 -= ((/* implicit */unsigned int) min((((int) ((-6175407323136124764LL) - (((/* implicit */long long int) 2115123621U))))), (((/* implicit */int) (unsigned short)58775))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) 
    {
        for (unsigned short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (signed char i_7 = 3; i_7 < 24; i_7 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        arr_27 [i_5] [i_6] [i_5] [i_8 + 1] |= ((/* implicit */short) var_4);
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (-6175407323136124764LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19638)))));
                    }
                    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6175407323136124772LL)) ? (((/* implicit */int) (unsigned short)58775)) : (((/* implicit */int) (unsigned short)4))));
                    arr_28 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */short) min((((/* implicit */int) (unsigned short)19319)), ((-((-(((/* implicit */int) (unsigned char)117))))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */_Bool) var_0);
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 274743689218LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1668199990U)))) ? (((int) ((var_8) ? (2238952932U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) ((274743689228LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)7936))))))))));
}
