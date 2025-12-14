/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 128578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=128578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/128578
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) 3453843555122306636ULL))) & (((/* implicit */int) ((unsigned char) var_7)))))) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)83))) + (var_2))), (((/* implicit */unsigned long long int) 1647243008)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1647243015)) ? (((((/* implicit */_Bool) (unsigned char)206)) ? (((/* implicit */int) (unsigned char)192)) : (1511204126))) : (((/* implicit */int) var_11)))))));
    var_16 = ((/* implicit */int) ((unsigned char) var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_0] [(unsigned short)5] [i_0] [(unsigned char)9] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) (unsigned char)216)) == (((/* implicit */int) (unsigned char)45))))) <= (((/* implicit */int) (unsigned short)46705)))) ? ((((-2147483647 - 1)) - ((~(((/* implicit */int) (unsigned char)27)))))) : (arr_6 [i_0] [i_0] [i_1])));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [(unsigned char)10] [(unsigned short)4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) 2147483630)) >= (14992900518587244980ULL))) ? (((/* implicit */unsigned long long int) ((int) 14992900518587244990ULL))) : (((((/* implicit */_Bool) 18446744073709551608ULL)) ? (((/* implicit */unsigned long long int) 1799936465)) : (18446744073709551609ULL)))))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2])) : ((-(((/* implicit */int) min(((unsigned short)37386), (((/* implicit */unsigned short) (unsigned char)186)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                {
                    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 15; i_7 += 1) 
                        {
                            {
                                arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)110)))), (-1630193557)))) ? (((/* implicit */int) arr_20 [(unsigned short)2] [i_6] [i_5] [i_0] [i_0])) : (((int) min((((/* implicit */unsigned long long int) (unsigned char)15)), (18446744073709551608ULL))))));
                                var_17 = ((/* implicit */unsigned char) ((int) arr_18 [(unsigned short)0] [(unsigned short)0] [i_1] [i_7 + 1]));
                                arr_23 [i_0] [i_0] [i_1] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) arr_12 [i_5] [i_5] [i_5]);
                                arr_24 [i_0] [(unsigned char)5] [i_5] [i_6] [(unsigned char)5] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_21 [i_1]))))) << (((14992900518587244980ULL) - (14992900518587244979ULL)))))) ? (((((/* implicit */_Bool) 17621080379890749379ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)61756))) : (3453843555122306665ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */int) (unsigned short)0)) >= (((/* implicit */int) (unsigned char)10)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_6] [i_0] [i_0])) ? (arr_2 [i_0] [i_7 - 1]) : (((/* implicit */int) (unsigned short)3779)))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
