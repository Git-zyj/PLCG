/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 118094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=118094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/118094
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned short)1))))), (var_8)))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((short) var_5))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)1)))))) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)96))))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
    var_18 *= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_14))) > (var_8)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 24; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)22)), (2147483639)))) ? (max((1345703547U), (((/* implicit */unsigned int) var_3)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned int) -991540031)) : (arr_0 [i_0])))))) ? (((((/* implicit */int) ((unsigned short) (unsigned char)95))) % ((-(((/* implicit */int) arr_2 [i_0])))))) : (((/* implicit */int) arr_4 [i_0]))));
                    var_20 = var_0;
                    arr_7 [i_0] [i_0] [i_2] = min((((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [i_0])), (2949263751U)))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (15ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)15)) << (((((/* implicit */int) arr_3 [i_0] [i_1 + 1])) - (38656))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 2) /* same iter space */
                    {
                        arr_10 [i_0] [i_1 - 1] [i_2] [(short)12] [i_3] &= ((/* implicit */short) var_10);
                        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)65529))))))))));
                    }
                    for (long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32765)) + (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */int) ((short) (signed char)126))) : (((int) -991540033))))) ? (((long long int) ((_Bool) var_14))) : (var_7));
                        arr_14 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((min((max((864691128455135232LL), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1880064160U))))))) > (((long long int) min((((/* implicit */unsigned int) arr_3 [17] [i_4])), (134152192U))))));
                        var_23 = ((/* implicit */signed char) arr_11 [i_0] [i_2 - 4] [i_0]);
                    }
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned int) ((arr_4 [i_0]) ? (((int) var_4)) : (((/* implicit */int) (unsigned short)1))));
                        var_25 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_2] [i_5]))))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) (short)-1))))), (((((/* implicit */_Bool) arr_13 [i_0] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) : (1023U)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_1] [i_5])) | (1811023042)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (((long long int) var_5))))));
                    }
                }
            } 
        } 
    } 
}
