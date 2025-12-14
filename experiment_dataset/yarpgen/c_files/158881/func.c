/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 158881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=158881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/158881
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
    var_19 &= var_2;
    var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-2147483647 - 1))) - (6954964357376741877ULL)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [(_Bool)1]) : (((/* implicit */int) var_17))))) ? (arr_1 [i_0]) : (((((/* implicit */int) arr_2 [i_0] [i_1])) | (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((short) arr_2 [i_0] [i_1]))) ^ (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) min(((+(654006945))), (((((/* implicit */_Bool) (unsigned short)63155)) ? (617969763) : (((/* implicit */int) (unsigned short)13951))))));
                arr_7 [(unsigned short)10] [(unsigned short)10] [i_1] = ((short) max((((/* implicit */int) ((31U) < (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))), (max((arr_1 [i_0]), (((/* implicit */int) var_17))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 19; i_2 += 2) 
    {
        for (int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_22 += ((/* implicit */_Bool) (unsigned short)10024);
                                var_23 = ((/* implicit */unsigned char) ((var_12) / (((/* implicit */unsigned int) (+(((((/* implicit */int) var_14)) ^ (((/* implicit */int) (_Bool)0)))))))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32760)) ? (31U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10024)))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_10 [i_2])), (arr_11 [i_2])))) : (((/* implicit */int) (unsigned short)15360))))), (((((/* implicit */_Bool) ((4294967270U) * (37U)))) ? (((((/* implicit */_Bool) var_9)) ? (arr_16 [i_2 + 1] [i_2 + 1] [(short)14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62663))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))))));
                                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_7))))) ? (min((((/* implicit */int) (unsigned short)30584)), ((-2147483647 - 1)))) : (((/* implicit */int) (short)2229))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (arr_15 [i_2 - 1]))))))));
                            }
                        } 
                    } 
                } 
                arr_25 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12238219485914785947ULL)))) ? (((((/* implicit */_Bool) 0ULL)) ? (1601249478) : (((/* implicit */int) (unsigned short)15360)))) : (((((/* implicit */_Bool) arr_9 [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_9 [i_3] [i_3 + 1])) : (((/* implicit */int) (signed char)55))))));
                var_26 = ((/* implicit */unsigned short) 11002599768127054133ULL);
            }
        } 
    } 
}
