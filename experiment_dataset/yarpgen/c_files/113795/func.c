/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113795
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (signed char i_2 = 2; i_2 < 18; i_2 += 1) 
            {
                {
                    arr_6 [i_0] [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */int) (unsigned short)60071)) != (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1824734333)))) <= (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5476))) : (arr_3 [i_0] [i_0]))))))));
                    var_14 -= ((/* implicit */signed char) ((arr_1 [i_1] [i_2 + 1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2 - 1] [i_1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_2] [i_2] [i_2 - 2])) ? (((/* implicit */unsigned long long int) arr_9 [i_3])) : (((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)29788)) ? (((/* implicit */int) (unsigned short)60067)) : (((/* implicit */int) (_Bool)1))))))))));
                                var_16 = ((/* implicit */unsigned short) 5ULL);
                                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((((/* implicit */_Bool) arr_5 [i_0] [i_4 + 2] [i_2 - 2] [i_0])) || (((/* implicit */_Bool) 36028797018963967ULL)))) ? (((((/* implicit */_Bool) (unsigned short)5469)) ? (((/* implicit */int) (_Bool)0)) : (-1824734349))) : (((((/* implicit */_Bool) 7895596626292354037ULL)) ? (((/* implicit */int) arr_5 [i_0] [i_4 + 1] [i_2 - 1] [i_0])) : (((/* implicit */int) (unsigned short)5463)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_5 = 4; i_5 < 19; i_5 += 3) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    var_18 = ((unsigned char) ((unsigned short) ((unsigned int) (unsigned char)19)));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (signed char i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_17 [i_8] [i_7]))));
                                var_20 |= ((/* implicit */short) ((((/* implicit */int) arr_16 [i_5 - 4])) == (((((/* implicit */_Bool) arr_22 [(signed char)12] [i_7] [i_9 + 1])) ? (((/* implicit */int) arr_16 [i_8])) : (((/* implicit */int) arr_16 [i_5 - 1]))))));
                                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_5] [i_5] [i_5 + 1] [i_5] [i_8 - 1] [4U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5441))) : (arr_21 [i_5] [(signed char)9] [i_5 + 1] [i_5] [i_8 - 1] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_21 [i_5] [i_5] [i_5 + 1] [i_5] [i_8 - 1] [i_9]) <= (arr_21 [i_5] [10ULL] [i_5 + 1] [i_5] [i_8 - 1] [i_8 - 1]))))) : (arr_21 [i_5 - 3] [i_5] [i_5 + 1] [i_5] [i_8 - 1] [i_9])));
                                var_22 = ((/* implicit */_Bool) arr_12 [i_5] [i_7]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = var_7;
    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((-4748194221659884945LL) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -1662557766))))))))))));
}
