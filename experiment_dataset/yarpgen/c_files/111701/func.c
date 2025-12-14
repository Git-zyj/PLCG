/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 111701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=111701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/111701
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
    var_10 = ((/* implicit */short) 2438252885047059682ULL);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))))) ? (((/* implicit */unsigned long long int) (~(168815048)))) : (((((/* implicit */unsigned long long int) 2084777873U)) | (6695166426451144904ULL))))) | (10743600081237241815ULL)));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 2) 
                            {
                                var_11 *= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)32767))));
                                var_12 *= 1090921693184ULL;
                                var_13 += ((/* implicit */short) ((((/* implicit */_Bool) (~(-6172562717875353394LL)))) ? (((((/* implicit */_Bool) 2438252885047059695ULL)) ? (arr_3 [i_3 - 3] [i_4 - 2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)1))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3 - 2] [i_4 - 2] [i_0])) || (((/* implicit */_Bool) (unsigned short)65528))))))));
                                arr_14 [i_1] [i_0] [(unsigned char)0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 2] [i_3 - 4] [i_1 - 1]))))) || (((((/* implicit */_Bool) 213623174U)) || (((/* implicit */_Bool) 1743399856))))));
                                var_14 |= ((/* implicit */_Bool) arr_11 [i_0] [i_3] [i_2] [i_3] [i_4]);
                            }
                            var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)65528)) || (((/* implicit */_Bool) max((2438252885047059682ULL), (((/* implicit */unsigned long long int) 2084777867U)))))));
                            var_16 = ((((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_3 - 1] [i_3 - 1] [i_1])) ? (2355802161U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65534))))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 + 1] [i_3 - 1] [i_1 + 1] [i_3 - 2]))));
                        }
                    } 
                } 
                arr_15 [i_0] [i_1] = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_1 + 1] [i_1]);
            }
        } 
    } 
}
