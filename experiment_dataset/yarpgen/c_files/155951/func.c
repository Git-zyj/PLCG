/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 155951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=155951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/155951
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
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)35496))));
                                arr_15 [i_0] [i_0] [i_0] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */unsigned short) max((max((arr_3 [i_0 + 2] [i_1] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) arr_8 [i_2] [i_2]))))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1] [i_4])))))));
                                arr_16 [i_0 + 2] [(signed char)8] [i_0 + 2] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)50)), (var_0)))) ? ((~(((/* implicit */int) arr_8 [i_0 - 1] [i_0 - 1])))) : (((/* implicit */int) var_9))));
                                arr_17 [i_0] [i_1] [i_0] [(signed char)15] [i_4] [i_4] = ((/* implicit */unsigned long long int) 0U);
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned short) 1924864910U);
                    arr_18 [i_1] [(signed char)7] = ((/* implicit */signed char) max((max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44555))))), (((((/* implicit */_Bool) -694099694)) ? (var_7) : (((/* implicit */long long int) var_0)))))), (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) / (3703280842493768445LL)))));
                    var_14 = ((/* implicit */long long int) 4294967286U);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            {
                var_15 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)52))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned char i_8 = 1; i_8 < 16; i_8 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 24970693)) ? (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6156))) : (1924864910U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))))))));
                            var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_22 [15LL] [i_5])), ((unsigned short)59403)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_19 [i_6] [i_7])))) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)55828)) : (((/* implicit */int) (unsigned short)44555)))), (((((/* implicit */int) arr_22 [i_6] [i_8])) & (arr_26 [i_5] [i_5] [i_5] [i_6]))))))));
                            var_18 = (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8 + 1] [i_8 + 3] [i_8 + 1] [i_5]))))));
                            var_19 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_9 = 1; i_9 < 18; i_9 += 2) 
                {
                    for (int i_10 = 2; i_10 < 18; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_5] [11U])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_2))))), (arr_30 [i_9 + 2] [i_9 - 1] [(unsigned short)9] [i_9] [i_9 - 1]))))));
                                arr_38 [(short)3] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_11])))))) != (min((-1544913742521110723LL), (((/* implicit */long long int) var_4))))))) == ((+(arr_26 [16LL] [(unsigned short)17] [i_10 - 2] [i_5])))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
