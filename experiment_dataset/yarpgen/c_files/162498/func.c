/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 162498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=162498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/162498
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
    var_11 = ((/* implicit */long long int) (_Bool)1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) ((arr_3 [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((arr_5 [i_0] [i_0] [i_2]) / (((/* implicit */int) var_7)))) : (2147483647))) : (((/* implicit */int) ((unsigned short) arr_3 [i_0 - 1])))));
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        arr_11 [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1] [i_1] [i_0]) >> (((var_9) + (8246842529469477280LL)))))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) (unsigned char)53))))))) ? (((((/* implicit */_Bool) (unsigned char)11)) ? (min((513819114944945821LL), (((/* implicit */long long int) (unsigned char)11)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))) : (((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) var_10)) : ((-(((/* implicit */int) (unsigned char)190)))))))));
                        var_12 *= ((/* implicit */unsigned short) ((((((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_6)))) < (((int) arr_5 [i_2] [i_0] [i_0])))) ? ((-2147483647 - 1)) : ((+(((/* implicit */int) var_2))))));
                    }
                    for (int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
                    {
                        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1] [i_2])) ? (arr_5 [i_0] [i_0] [(unsigned char)12]) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_2] [i_4] [i_4]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5480794110215186095LL)) ? (((/* implicit */int) arr_1 [i_4] [i_0 - 1])) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)244))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_1)), ((signed char)-33))))) : (arr_2 [i_0] [i_1] [i_0 + 1])))));
                        arr_14 [i_1] [i_1] [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)190)) ? (520093696) : (((/* implicit */int) var_1))))) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)16384)) : (1))) : ((-(((/* implicit */int) (signed char)-56)))))) - ((~(((/* implicit */int) ((unsigned char) (unsigned char)202)))))));
                        var_14 &= ((/* implicit */signed char) (((!((_Bool)1))) ? (((/* implicit */unsigned int) ((int) min((((/* implicit */long long int) arr_1 [i_0] [i_1])), (arr_9 [i_0 - 1] [i_1] [i_2]))))) : (max((0U), (((/* implicit */unsigned int) (_Bool)1))))));
                        arr_15 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_1] [i_2] [i_4])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_2] [i_4]))))), (((((/* implicit */_Bool) arr_12 [i_0] [i_0 + 2] [i_0] [i_0 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-5149338241872345969LL)))));
                    }
                    for (int i_5 = 0; i_5 < 13; i_5 += 4) /* same iter space */
                    {
                        arr_20 [i_1] = ((((/* implicit */int) ((_Bool) min((((/* implicit */int) arr_18 [i_1] [i_1])), (var_8))))) >> (((((-2788023947892737539LL) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))) + (7LL))));
                        var_15 += ((((_Bool) (unsigned char)157)) ? (((((/* implicit */_Bool) -566732011)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-19534)) : (((/* implicit */int) (unsigned char)5)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)1)) : (((/* implicit */int) arr_7 [i_0 + 2])))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_0] [i_5] [i_2] [i_5])) : (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_0])))));
                        var_16 &= ((/* implicit */long long int) ((((arr_5 [i_0] [i_0 - 1] [i_0 - 1]) | (((/* implicit */int) var_1)))) > (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 2] [i_0 + 2])) ? (((/* implicit */int) (signed char)-127)) : (arr_5 [i_0] [i_0 + 2] [i_0 + 1])))));
                    }
                }
            } 
        } 
    } 
}
