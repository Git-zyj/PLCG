/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 138281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=138281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/138281
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_15 -= ((/* implicit */unsigned short) ((short) (+(((/* implicit */int) arr_0 [i_0])))));
                var_16 -= ((/* implicit */unsigned char) (unsigned short)16233);
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((6842578749107317017ULL) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4540478102520805194ULL)) ? (((/* implicit */int) (unsigned short)60536)) : (317694795))))))) <= (((/* implicit */int) min(((short)-21924), (var_0))))));
                arr_7 [(unsigned char)21] = ((/* implicit */unsigned int) ((int) ((signed char) ((unsigned long long int) arr_5 [(unsigned short)1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_18 += ((/* implicit */long long int) (short)(-32767 - 1));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 14800579789576088231ULL)) && (((/* implicit */_Bool) ((((unsigned long long int) (short)-21924)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)60))) ^ (arr_3 [i_0] [i_0]))))))));
                            var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((arr_6 [i_1] [i_1]), (((/* implicit */int) var_12)))), (((/* implicit */int) (unsigned char)253))))) ? (((arr_3 [i_0] [i_0]) & (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) ^ (var_5)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
                            var_21 += ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_3]))))));
                            arr_12 [i_0] [8U] [8U] [8U] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)16)) <= (((/* implicit */int) (short)-13085))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        for (unsigned char i_5 = 2; i_5 < 9; i_5 += 4) 
        {
            for (int i_6 = 1; i_6 < 7; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 6; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 2; i_8 < 8; i_8 += 4) 
                        {
                            {
                                var_22 &= ((/* implicit */signed char) (unsigned char)59);
                                var_23 += ((/* implicit */unsigned char) max((((arr_5 [(unsigned char)12] [i_6] [i_4]) & (arr_5 [i_5 - 2] [i_6] [(signed char)0]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)16)) >> (((arr_11 [i_8] [i_8 + 2]) - (479451737U))))))));
                                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_11))));
                                arr_29 [i_6] [i_5] [i_5 - 1] [i_5 - 1] [(short)1] = ((/* implicit */unsigned short) ((int) max((706997188713865190ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (2147483647) : (2147483636)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-82)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_2))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (unsigned char)197)) : (arr_6 [i_5] [i_5]))))));
                }
            } 
        } 
    } 
    var_26 = ((signed char) 2517335169U);
    var_27 = (unsigned char)69;
}
