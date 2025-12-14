/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 12983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=12983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/12983
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
    var_20 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_4)), (5756609682571027805ULL)))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) (_Bool)0);
                            var_22 = ((/* implicit */unsigned short) var_16);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned int) 12690134391138523811ULL);
                            var_24 = ((/* implicit */short) ((int) (unsigned char)50));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_3])) : ((((_Bool)0) ? (((/* implicit */int) (unsigned short)255)) : (((/* implicit */int) var_4))))));
                            arr_14 [i_0] [i_1] [(_Bool)1] [i_3] [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_5]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_0] = var_16;
                            var_26 += ((/* implicit */int) (!(((/* implicit */_Bool) 3606613030625985565LL))));
                            arr_18 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_11 [i_0])) : (-1830886663)))) ? (((unsigned long long int) var_3)) : (((((/* implicit */_Bool) 3606613030625985565LL)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_5 [i_0] [i_0]))))));
                            var_27 += ((/* implicit */long long int) ((unsigned short) arr_15 [(signed char)4] [i_1] [i_2] [i_1] [i_6]));
                        }
                        var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65281))) - (max((((/* implicit */unsigned long long int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))), ((~(12690134391138523811ULL))))))))));
                        arr_19 [i_0] [i_2] [i_1] [i_1] [i_0] = (!(((/* implicit */_Bool) max((((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_2] [i_0])) ^ (1465438305))), (((var_13) ^ (((/* implicit */int) var_12))))))));
                        var_29 = ((/* implicit */short) (~(((int) arr_1 [i_0]))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]) / (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)26)))))) : (((/* implicit */int) (_Bool)0))));
    }
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
    {
        var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) min((arr_8 [i_7] [i_7] [i_7] [i_7]), (arr_8 [i_7] [i_7] [i_7] [i_7])))))))));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            var_32 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_6 [i_7] [i_8] [i_8] [i_7])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_7] [i_8])))) >= (min((((/* implicit */int) var_14)), (22))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))) : (var_7)));
            var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3606613030625985566LL)) ? (((/* implicit */long long int) 370117271)) : (((max((var_0), (((/* implicit */long long int) var_10)))) | (((/* implicit */long long int) ((/* implicit */int) (!(var_8))))))))))));
        }
        for (int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            /* LoopNest 3 */
            for (short i_10 = 0; i_10 < 15; i_10 += 3) 
            {
                for (int i_11 = 0; i_11 < 15; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        {
                            arr_40 [i_7] [i_11] [i_10] [i_9] [i_7] = ((/* implicit */int) ((long long int) (signed char)109));
                            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)0)))))))))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1465438305)) ? (5756609682571027804ULL) : (((/* implicit */unsigned long long int) 2147450880))));
                            arr_41 [i_11] [i_11] [i_11] [i_7] [i_7] [i_11] [i_11] = arr_4 [i_9];
                        }
                    } 
                } 
            } 
            var_36 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */unsigned long long int) -1250097503)) : (16492033359888505091ULL))), (var_7)));
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_46 [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((12690134391138523828ULL), (((/* implicit */unsigned long long int) var_5)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((arr_21 [i_13] [i_13]), (((/* implicit */long long int) var_17)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3606613030625985565LL)) ? (var_5) : (((/* implicit */int) (short)-28786))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-18))))) : (((((var_18) + (9223372036854775807LL))) << (((((var_6) + (1917106308))) - (56)))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                {
                    var_37 ^= ((/* implicit */int) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) 1289678760)) : (3557918769U)))) ? (((/* implicit */unsigned long long int) var_5)) : (((((/* implicit */_Bool) arr_26 [i_13] [i_15])) ? (6ULL) : (((/* implicit */unsigned long long int) var_18)))))) & (((/* implicit */unsigned long long int) ((-4) & (((/* implicit */int) (short)-9130)))))));
                    arr_54 [i_14] [i_13] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) ((((/* implicit */_Bool) 3606613030625985585LL)) && (arr_8 [i_13] [i_13] [i_13] [i_13])))) : (((/* implicit */int) (_Bool)0))))), (((((long long int) (unsigned short)49425)) | ((~(var_0)))))));
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (short)15932)), (3698632660122302458LL)))) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) (short)25391))))) ? (17097408557069258422ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_15] [i_13] [i_13] [i_15] [i_13]))))))));
                }
            } 
        } 
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            for (short i_18 = 0; i_18 < 13; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_39 = ((/* implicit */short) var_9);
                        arr_67 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_24 [i_18])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16]))) : (((((/* implicit */_Bool) 4579425235878740968ULL)) ? (15783486868306669733ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_57 [i_16]))))))), (((/* implicit */unsigned long long int) max((arr_39 [i_16] [i_17] [i_18] [i_19] [i_17]), (arr_12 [i_16] [i_17] [i_18] [i_18] [i_19]))))));
                        var_40 = ((/* implicit */unsigned int) var_0);
                    }
                } 
            } 
        } 
        var_41 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((short) max((var_19), (((/* implicit */int) (signed char)-63)))))) + ((((+(((/* implicit */int) var_14)))) - (((((/* implicit */_Bool) (short)-6179)) ? (var_5) : (((/* implicit */int) arr_56 [i_16]))))))));
    }
    var_42 -= ((/* implicit */long long int) var_17);
    var_43 = ((/* implicit */short) min((((((/* implicit */_Bool) var_14)) ? (((455773787U) & (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (~(0)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 3611277120U)))))));
    var_44 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) var_16))) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((var_19) + (2147483647))) << (((/* implicit */int) var_9))))) : (max((var_16), (((/* implicit */unsigned long long int) var_8))))))));
}
