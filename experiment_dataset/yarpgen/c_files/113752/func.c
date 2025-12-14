/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 113752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=113752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/113752
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)-116))));
        arr_4 [i_0] = ((/* implicit */int) ((signed char) arr_1 [i_0]));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_5 [i_1] [i_1])))) ? (((/* implicit */int) var_14)) : ((~(((/* implicit */int) (signed char)(-127 - 1))))))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
        arr_8 [i_1] = (!(((/* implicit */_Bool) arr_6 [i_1])));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((18014398508433408LL) & (((/* implicit */long long int) 4294967295U))))))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned short) 1694985626);
            arr_13 [i_1] [i_1] [i_1] = ((/* implicit */int) ((arr_5 [i_2] [i_1]) < (((/* implicit */int) ((unsigned short) var_5)))));
        }
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_18 [i_3] = ((/* implicit */unsigned short) ((int) ((signed char) (unsigned char)255)));
        arr_19 [i_3] = ((unsigned short) arr_17 [i_3]);
    }
    var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)34441)))) : (var_1)))) ? (((/* implicit */int) var_10)) : (max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)95)))), ((~(((/* implicit */int) var_8))))))));
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (398863333) : (2147483636)))) ? (4160749568U) : (((/* implicit */unsigned int) -2147483632)))) <= (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (_Bool)1))) % (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_6) : (((/* implicit */int) (unsigned short)42553)))))))));
    /* LoopSeq 2 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                for (long long int i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    {
                        var_19 = ((((/* implicit */_Bool) (short)32767)) ? (((((/* implicit */_Bool) (unsigned short)6028)) ? (((((/* implicit */_Bool) 3521440875U)) ? (((/* implicit */int) (unsigned short)0)) : (515530901))) : ((-(((/* implicit */int) (signed char)56)))))) : (((/* implicit */int) (unsigned short)31094)));
                        arr_31 [i_5] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                        arr_32 [i_6] [i_6] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_12) / (((/* implicit */int) (signed char)56))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -831350387)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (arr_20 [i_4]))))), (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) <= (var_3))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)31094)) && (((/* implicit */_Bool) var_12))))) : (((/* implicit */int) (_Bool)1)))))));
                        var_20 = ((/* implicit */int) max((var_20), (((((((((/* implicit */int) var_2)) >= (((/* implicit */int) (unsigned short)30857)))) && (((/* implicit */_Bool) 1568626004)))) ? (((((/* implicit */int) arr_22 [i_4] [i_6] [i_7])) | (((/* implicit */int) (unsigned short)60802)))) : (2147483636)))));
                        arr_33 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        } 
        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_4])) ? (2147483632) : (((/* implicit */int) var_5))))) ? ((~(((/* implicit */int) arr_23 [i_4])))) : (((/* implicit */int) arr_23 [i_4]))));
        arr_34 [i_4] = ((/* implicit */signed char) (unsigned short)6022);
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-1), (((/* implicit */short) (_Bool)1))))) ? (arr_38 [i_4] [i_9] [i_10]) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (((+(((/* implicit */int) (short)32767)))) == ((~(var_3)))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned short)63)), (-2147483640)))))) && (((/* implicit */_Bool) (unsigned short)4096))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) 427004159)) ? (((((/* implicit */_Bool) arr_27 [i_8] [i_8] [i_4])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)46)))) : ((~(515530901))))) == (((((/* implicit */int) (short)-1)) % (((/* implicit */int) (unsigned short)60506)))))))));
                        arr_43 [i_4] [i_8] [i_9] [i_8] = ((/* implicit */signed char) ((unsigned short) (+(((/* implicit */int) (signed char)-29)))));
                        arr_44 [i_4] [i_4] = ((/* implicit */unsigned int) (signed char)-120);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        arr_47 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [i_11] [i_11])) ? ((+(((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) arr_46 [i_11] [i_11]))))));
        var_25 = ((/* implicit */signed char) ((unsigned short) (_Bool)1));
        arr_48 [i_11] [i_11] = ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)123)) - (((/* implicit */int) (unsigned short)39995))))) ? (((/* implicit */int) (unsigned short)60818)) : ((~(((/* implicit */int) (unsigned short)866)))));
    }
}
