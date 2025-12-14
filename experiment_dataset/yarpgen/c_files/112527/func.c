/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 112527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=112527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/112527
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-27172)) ? (((/* implicit */int) (short)-9518)) : (((/* implicit */int) (short)27185))))), (((((/* implicit */_Bool) 1199005127U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (765706134U)))))));
        /* LoopSeq 4 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) (short)-27172))) ? ((+(((/* implicit */int) (short)27185)))) : (((/* implicit */int) max((((/* implicit */short) (signed char)83)), ((short)27195))))));
            arr_8 [4U] [i_1] = ((/* implicit */_Bool) (short)-27172);
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((_Bool) (short)27175))))))))));
            var_20 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)13730)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (short)28980))))), (((((/* implicit */_Bool) (short)-27172)) ? (888062748U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)70))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 1; i_3 < 8; i_3 += 1) 
            {
                for (unsigned int i_4 = 4; i_4 < 8; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-32043)) ? (((/* implicit */int) (short)-32029)) : (((/* implicit */int) (short)29820))));
                        }
                    } 
                } 
            } 
            arr_21 [i_0] [(_Bool)1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)0))));
        }
        for (unsigned int i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2155700742U)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27180))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27194))) : (965170272U)))))));
            arr_24 [(short)2] [i_0] [(_Bool)1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) (short)27185)) ? (2146754290U) : (1338419162U)))))) ? (((((/* implicit */_Bool) 731724682U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)27197))) : (2139266567U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
            var_24 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31087)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31938))) : (1137675253U)))) ? (((((/* implicit */_Bool) 2654493555U)) ? (((/* implicit */int) (short)9067)) : (((/* implicit */int) (short)12571)))) : (((/* implicit */int) (short)-27175)))));
            arr_25 [i_6] [i_6] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4135111727U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-64))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)13730), ((short)28980))))) : (2435874201U)));
        }
        for (signed char i_7 = 1; i_7 < 6; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_25 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (-(2155700731U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-53)), ((short)-13707))))) : (((((/* implicit */_Bool) 1344549279U)) ? (3200324598U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                arr_30 [i_7] [i_7 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (short)13730))) ? (max((((/* implicit */unsigned int) (signed char)66)), (2701203109U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (short)27166)) : (((/* implicit */int) (short)27177)))))));
                arr_31 [i_0] [(short)9] [(short)0] [i_7] = (~(667008504U));
                arr_32 [i_0] [i_7] [i_0] = ((/* implicit */_Bool) ((short) (((_Bool)1) ? (3125507093U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27249))))));
            }
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
            {
                arr_36 [i_7] = (_Bool)1;
                var_26 = ((/* implicit */_Bool) 4074996311U);
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (short i_11 = 4; i_11 < 9; i_11 += 4) 
                    {
                        {
                            arr_44 [i_10] [i_10] [i_7] [i_10] [i_10] = ((/* implicit */short) min((3720090967U), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-31910)))))));
                            var_27 = ((/* implicit */signed char) min(((((_Bool)1) ? (((((/* implicit */_Bool) (short)-4066)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)81))) : (1859093087U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9313))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)4989)) ? ((+(((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (short)-15821)) : (((/* implicit */int) (short)15808)))))))));
                        }
                    } 
                } 
                arr_45 [i_0] [i_7] [(short)2] = ((/* implicit */short) ((((_Bool) (signed char)-116)) ? (((((/* implicit */_Bool) (short)-28472)) ? (1545410999U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10495))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-30497)))))));
            }
            var_28 = ((/* implicit */signed char) (!(((_Bool) (short)28471))));
            /* LoopNest 3 */
            for (signed char i_12 = 4; i_12 < 8; i_12 += 3) 
            {
                for (unsigned int i_13 = 1; i_13 < 9; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 10; i_14 += 1) 
                    {
                        {
                            var_29 = ((((/* implicit */_Bool) ((unsigned int) (_Bool)0))) ? (((unsigned int) (short)365)) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 34030947U)) ? (((/* implicit */int) (short)-28483)) : (((/* implicit */int) (short)-28472))))))));
                            arr_54 [i_7] [i_7] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
                            var_30 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2165)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (3441462975U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))) ? ((~(((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (268426655U))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28471)) ? (((((/* implicit */_Bool) 2842480537U)) ? (((/* implicit */int) (signed char)100)) : (((/* implicit */int) (short)-30495)))) : ((~(((/* implicit */int) (_Bool)1)))))))));
                            var_31 = ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                        }
                    } 
                } 
            } 
        }
    }
    var_32 = ((/* implicit */signed char) var_16);
    var_33 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) var_9))), ((-(((/* implicit */int) (signed char)22))))));
    var_34 = ((/* implicit */_Bool) ((signed char) ((var_14) ? ((((_Bool)1) ? (268426663U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
}
