/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 14933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=14933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/14933
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
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16383))) > (479490659U)))) & (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), ((short)-1)))) ? (max((2632201884U), (var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_7 [i_0] = ((((/* implicit */int) ((((/* implicit */_Bool) (+(var_13)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (short)27499)) : (((/* implicit */int) (unsigned short)24551)))))))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (arr_5 [i_0] [i_0] [i_2] [i_0])))));
                    arr_8 [i_0] [(unsigned short)10] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(min((((/* implicit */long long int) arr_2 [i_0])), (-1048068336709906088LL)))))) || (((/* implicit */_Bool) max((((/* implicit */short) (!((_Bool)1)))), (arr_2 [i_0]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
    {
        for (short i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] [6ULL] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned short)65535))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((unsigned char) arr_10 [i_3] [i_5]))))));
                    var_19 = ((/* implicit */unsigned int) arr_13 [i_3]);
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned short) arr_12 [i_3] [i_3])), (arr_14 [(unsigned short)9] [i_4]))), (min((var_1), ((unsigned short)96)))))) ? (((/* implicit */int) (unsigned short)40985)) : (((/* implicit */int) ((((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 4294967295U))))) > (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)204))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned char) ((unsigned short) 0LL)))), (((((/* implicit */_Bool) min((arr_9 [i_3]), ((-2147483647 - 1))))) ? (((unsigned long long int) var_2)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)172)) ? (((/* implicit */int) (_Bool)1)) : (785305497))))))));
                                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(-1))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned short)42644)))))))) ? (((((unsigned long long int) (_Bool)1)) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)83))))))) : (((/* implicit */unsigned long long int) min((((arr_24 [i_3] [i_3] [8U] [i_6] [i_7]) >> (((((/* implicit */int) (unsigned short)65515)) - (65507))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 260046848))))))))));
                                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((unsigned int) (short)0)) & (arr_24 [i_7 - 1] [i_4] [i_4] [i_7] [i_7])))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) max((arr_9 [3ULL]), (((/* implicit */int) (_Bool)0)))))))) : (((/* implicit */int) max((arr_14 [i_7 - 1] [i_7 - 1]), (arr_14 [(_Bool)0] [4U]))))));
                                var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) (_Bool)0);
    var_26 = ((/* implicit */int) (unsigned short)1023);
}
