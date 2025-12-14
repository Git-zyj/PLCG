/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 169280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=169280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/169280
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
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (var_0)))) : (min((var_5), (((/* implicit */long long int) var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_0)))))))) : ((+(((/* implicit */int) var_10))))));
    var_14 &= ((/* implicit */short) max((((((/* implicit */_Bool) min(((unsigned short)65533), (((/* implicit */unsigned short) (short)-1512))))) ? (max((var_7), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_0)))), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_3)) : (var_7))), (((/* implicit */unsigned long long int) (short)20887))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [i_0] = -227131385;
                var_15 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)74)), ((unsigned char)135))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (arr_2 [i_0] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_11), (((/* implicit */unsigned short) (signed char)-115)))))) : (min((((/* implicit */unsigned long long int) arr_3 [i_1])), (arr_5 [i_0])))))));
                var_16 ^= ((/* implicit */int) ((unsigned char) var_5));
                arr_7 [i_0] [i_1 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (~(6032524786566044156LL))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-100))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)10)) : (arr_2 [i_0] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1717234023))))))) : (((/* implicit */int) (signed char)111))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_4 = 0; i_4 < 21; i_4 += 3) 
                {
                    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((min((var_5), (((/* implicit */long long int) arr_11 [i_4])))), (((/* implicit */long long int) (~(var_8))))))) & (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)121))))), (((18446744073709551613ULL) << (((((/* implicit */int) arr_11 [i_4])) - (128)))))))));
                    arr_16 [i_2] [i_3] [2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_10) ? (((arr_15 [i_4] [i_3] [i_2] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3]))))) : (((/* implicit */unsigned long long int) (-(arr_12 [i_2] [i_3] [i_4]))))))) ? (min((((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_12 [i_2] [i_3] [i_2]) : (((/* implicit */int) arr_11 [i_2])))), (max((arr_12 [i_2] [i_2] [i_2]), (((/* implicit */int) var_2)))))) : (((/* implicit */int) ((min((arr_10 [i_2] [i_3]), (((/* implicit */unsigned long long int) (_Bool)1)))) != (((/* implicit */unsigned long long int) var_5)))))));
                }
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_18 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)118)) ? (((6924030441935294970ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_19 [i_2] [i_3] [i_3] [i_6]))))))) : (((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)5)), (arr_21 [i_5] [i_5] [i_5])))) : (min((((/* implicit */unsigned long long int) (unsigned short)3)), (7389762133379835381ULL)))))));
                            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(arr_21 [i_2] [i_2] [i_2])))) & (((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_10 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2]))))))))));
                            var_20 = ((/* implicit */unsigned long long int) var_0);
                            arr_22 [i_6] [i_2] [18ULL] [i_2] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) : (var_6)))))));
                        }
                    } 
                } 
                arr_23 [10] [10] &= min(((~(((int) arr_20 [i_2] [i_2] [i_3] [i_3] [i_3] [i_3])))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551607ULL)))) || (((/* implicit */_Bool) min((((/* implicit */int) arr_17 [(unsigned short)15] [i_3])), (arr_12 [i_2] [i_3] [i_3]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_1);
}
