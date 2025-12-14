/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 125943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=125943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/125943
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))) % (((((/* implicit */_Bool) -1653771573599870793LL)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) 14450969636923715725ULL)) ? (479324315) : (1657233897))), (((/* implicit */int) (unsigned char)250))));
                var_12 = ((/* implicit */unsigned char) 17702147603440085862ULL);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((unsigned long long int) ((((/* implicit */long long int) -1657233897)) / ((+(arr_2 [i_0] [i_0]))))))));
                            arr_13 [i_3] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (14450969636923715725ULL) : (((/* implicit */unsigned long long int) arr_9 [i_2]))))) ? ((-(237653846))) : ((~(1951168707)))))) ? (((/* implicit */long long int) ((int) arr_11 [i_0] [i_0] [i_3]))) : (max((arr_3 [i_3] [i_3]), (arr_2 [i_0] [i_2])))));
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1653771573599870782LL)) ? (-271845814) : (arr_8 [i_3])))) ? (((((/* implicit */_Bool) -1653771573599870783LL)) ? (((/* implicit */int) (unsigned short)29110)) : (1657233898))) : (((((/* implicit */int) arr_4 [i_2])) + (((/* implicit */int) (signed char)-117))))))) ? (((max((((/* implicit */long long int) arr_1 [i_0])), (arr_9 [i_1]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) 1657233896)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) (unsigned short)0))))))) : (((long long int) ((signed char) (signed char)33))))))));
                            arr_14 [i_0] [i_1] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)29136)))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) 11920085323208036036ULL)) ? (((/* implicit */int) (signed char)124)) : (arr_5 [i_0] [i_1])))), (min((((/* implicit */long long int) (unsigned short)36425)), (arr_3 [i_2] [i_2])))))));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */int) max((arr_4 [i_3]), (arr_4 [i_0])))) | (min((((int) (unsigned short)29103)), (((/* implicit */int) ((unsigned char) 16017629177642046447ULL))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 4) 
    {
        for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-34)), ((unsigned char)103)))) + (((/* implicit */int) ((((/* implicit */int) arr_0 [i_4] [i_4])) != (((/* implicit */int) arr_4 [(unsigned char)17]))))))))));
                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36433)) ? (1657233911) : (((/* implicit */int) (signed char)-11))))) ? (((17ULL) ^ (((/* implicit */unsigned long long int) arr_6 [i_4] [18LL])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23)))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_5] [i_5] [(unsigned short)6] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)142), (((/* implicit */unsigned char) (signed char)-27)))))) : (((long long int) 18446744073709551599ULL)))) : (((/* implicit */long long int) ((int) (signed char)-72)))));
                var_18 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_4])) ? (((((((/* implicit */_Bool) arr_16 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) : (-9223372036854775792LL))) + (((long long int) arr_0 [i_4] [i_5])))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) max(((unsigned short)14647), (((/* implicit */unsigned short) (unsigned char)129)))))))));
                arr_20 [i_4] = ((/* implicit */signed char) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)51825))) / (16362140316244026931ULL))), (((/* implicit */unsigned long long int) ((unsigned char) arr_10 [i_4] [i_4] [i_4] [i_4])))))));
            }
        } 
    } 
}
