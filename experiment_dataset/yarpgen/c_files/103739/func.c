/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 103739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=103739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/103739
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
    var_11 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((_Bool) 81006432U)))) || (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)0))))))));
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_4))))) < (((/* implicit */int) (_Bool)1)))))) % (((((/* implicit */long long int) ((unsigned int) 1534327762))) | (((((/* implicit */long long int) ((/* implicit */int) var_7))) | (0LL)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_0 [i_0]))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((_Bool) arr_0 [i_0])) && (((((/* implicit */int) (unsigned char)45)) != (((/* implicit */int) arr_1 [i_0] [i_0])))))))) >= (((unsigned long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (unsigned short)60179)) && (((/* implicit */_Bool) 956099567)))));
        var_14 = ((/* implicit */short) min((var_14), (((short) arr_1 [i_0] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) -3659890714108898416LL);
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)))) || (((/* implicit */_Bool) 0LL)))))));
        arr_7 [i_1 + 2] [i_1] = (+(((((/* implicit */int) arr_5 [i_1])) << (((arr_4 [i_1] [i_1 - 3]) - (4930888781356548079ULL))))));
        /* LoopSeq 1 */
        for (short i_2 = 2; i_2 < 13; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_8 [i_2] [i_2])) > (2147483647)))));
            var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)106)) + (((/* implicit */int) ((arr_8 [(unsigned short)0] [(unsigned short)0]) || (((/* implicit */_Bool) (signed char)-60)))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
            {
                for (signed char i_4 = 3; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_16 [(signed char)6] [4LL] [i_3] &= ((/* implicit */long long int) arr_14 [i_1 - 1] [3U]);
                        arr_17 [i_1] [i_2] [i_3] [i_2] [i_4] [i_3] = ((/* implicit */short) arr_8 [i_2] [i_4]);
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) arr_12 [7ULL] [7ULL]))));
                        var_19 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)-32025)) && (((/* implicit */_Bool) arr_5 [i_3])))))));
                    }
                } 
            } 
        }
    }
}
