/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 135741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=135741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/135741
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) max(((+(14910583921942690691ULL))), (((/* implicit */unsigned long long int) (!(arr_1 [i_0]))))));
                    var_12 = ((/* implicit */_Bool) max((((var_10) ? (min((((/* implicit */long long int) var_1)), (2431764904341476267LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (short)32755))))))), (((/* implicit */long long int) var_0))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)61225)), (8633536345136239843ULL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_13 &= ((/* implicit */_Bool) 8633536345136239845ULL);
                    arr_13 [i_0] [i_3] [i_0] = ((/* implicit */long long int) (unsigned char)190);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_14 = ((/* implicit */unsigned int) (unsigned short)61225);
            var_15 = ((/* implicit */unsigned char) (unsigned short)61225);
            var_16 = ((/* implicit */signed char) arr_14 [i_0] [i_0] [i_0]);
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            var_17 = (signed char)-1;
            var_18 = ((/* implicit */unsigned short) 1956777020);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_25 [i_0] [i_6] [i_7] [i_7] = ((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0])) : (((/* implicit */int) arr_4 [i_0 + 3] [8LL]))))) : (arr_0 [i_0])));
                        var_19 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-19192))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((arr_21 [i_0] [(unsigned short)7] [(unsigned short)7] [16U]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) : (((((((/* implicit */_Bool) var_5)) ? (197252383928364468ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)33))))) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)0))))))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)61225)) ? (((/* implicit */int) (unsigned short)54034)) : (((/* implicit */int) (signed char)55))));
                            var_22 = ((/* implicit */short) (~(arr_22 [i_0] [i_8] [i_0])));
                            arr_30 [i_0] [i_0] [16U] = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */short) min(((signed char)75), (((/* implicit */signed char) arr_1 [i_0]))))), (arr_12 [i_0] [15LL] [i_8])))), ((-(((((/* implicit */int) arr_4 [i_0] [i_0 - 1])) * (((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned short i_10 = 2; i_10 < 19; i_10 += 3) 
                        {
                            arr_34 [i_0] [i_0] [i_7] [(short)12] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) var_4))))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) / (((/* implicit */int) ((((/* implicit */int) arr_14 [i_10] [i_8] [16U])) > (((((/* implicit */int) var_9)) | (((/* implicit */int) (short)-31460)))))))));
                        }
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(arr_22 [(signed char)14] [16U] [i_7]))))));
                    }
                } 
            } 
            arr_35 [i_0] [i_6] = (!(((/* implicit */_Bool) ((18446744073709551615ULL) >> (((((/* implicit */int) arr_32 [i_0] [i_0 + 2] [7U] [14ULL] [i_0] [14ULL] [7U])) - (60891)))))));
            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)7881))));
        }
        var_26 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)65230)), (13937054151105997030ULL)));
        arr_36 [i_0] = ((/* implicit */_Bool) 1872480056);
    }
    var_27 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (signed char)63)) | ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))))));
    var_28 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_6)))), (((/* implicit */int) var_7))));
    var_29 = ((/* implicit */_Bool) var_1);
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((((/* implicit */int) var_6)) & (((/* implicit */int) (_Bool)0))))));
}
